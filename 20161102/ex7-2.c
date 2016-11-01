#include<stdio.h>
#include<windows.h>

/*
"d:\ini.ini" 파일 내용

[SECTION]
keyvalue=defalut-value
[SEC]
key = 값찾기
keyint=1233
[구구단]
key=8단
*/

char buff[256];

BOOL FindSection(FILE * fp, char * section)
{
    BOOL isFound = FALSE;
    while (feof(fp) == FALSE)
    {
        fgets(buff, sizeof(buff), fp);
        if (strncmp(buff, section, strlen(section)) == 0)
        {
            printf("section found!!!\n");
            isFound = TRUE;
            break;
        }
    }
    return isFound;
}

BOOL FindKey(FILE * fp, char * key)
{
    BOOL isFound = FALSE;
    while (feof(fp) == FALSE)
    {
        fgets(buff, sizeof(buff), fp);
        if (buff[0] == '[')
        {
            // section end
            break;
        }
        if (strncmp(buff, key, strlen(key)) == 0)
        {
            char c = *(buff + strlen(key));
            // isspace "공백 , 줄바꿈, 탭"  여부 확인
            if (c == ' ' || c == '\t' || c == '=')
            {
                printf("key found!!!\n");
                isFound = TRUE;
                break;
            }
        }
    }
    return isFound;
}

BOOL FindValue(char ** outValue)
{
    BOOL isExist = FALSE;
    // "inikey = inivalue" <--- value = "= inivalue"
    *outValue = strstr(buff, "=");
    if (*outValue != NULL)
    {
        printf("value found!!!\n");
        isExist = TRUE;
        // value = " inivalue";
        *outValue = *outValue + strlen("=");
    }
    return isExist;
}

char * ltrim(char * string)
{
    while (*string != '\0')
    {
        if ((*string) == ' ' || (*string) == '\t' || (*string) == '\n')
        {
            string++;
        }
        else
        {
            break;
        }
    }
    return string;
}

char * rtrim(char * string)
{
    char * end = string + strlen(string) - 1;
    while (end >= string)
    {
        if ((*end) == ' ' || (*end) == '\t' || (*end) == '\n')
        {
            *end = '\0';
            end--;
        }
        else
        {
            break;
        }
    }
    return string;
}

char * trim(char * string)
{
    return rtrim(ltrim(string));
}

int main()
{
    FILE * fp;
    char section[] = "[SEC]";
    char key[] = "key";
    fopen_s(&fp, "e:\\ini.ini", "r");
    BOOL isSectionFound = FALSE, isKeyFound = FALSE, isValueFound = FALSE;
    char * value = NULL;
    
    isSectionFound = FindSection(fp, section);
    if (isSectionFound == FALSE)
    {
        printf("섹션을 찾지 못함\n");
        system("pause"); return 1;
    }
    
    isKeyFound = FindKey(fp, key);
    if (isKeyFound==FALSE)
    {
        printf("섹션내 키를 찾지 못함\n");
        system("pause"); return 2;
    }
    
    isValueFound = FindValue(&value);
    if (isValueFound == FALSE)
    {
        printf("값을 찾지 못함\n");
        system("pause"); return 0;
    }

    value = trim(value);
    printf("키 \"%s\" 의 값은 \"%s\"\n", key, value);

    // 출력
    /*
    section found!!!
    key found!!!
    value found!!!
    값찾기

    키 "key" 의 값은 "값찾기"
    */

    system("pause");
    return 0;
}