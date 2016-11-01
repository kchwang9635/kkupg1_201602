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
int main()
{
    FILE * fp;
    char section[] = "[SEC]";
    char key[] = "key";
    fopen_s(&fp, "e:\\ini.ini", "r");
    char buff[256];
    BOOL isSectionFound = FALSE, isKeyFound = FALSE, isValueFound = FALSE;
    char * value;
    while (feof(fp) == FALSE)
    {
        fgets(buff, sizeof(buff), fp);
        if (strncmp(buff, section, strlen(section)) == 0)
        {
            printf("section found!!!\n");
            isSectionFound = TRUE;
            break;
        }
    }
    if (isSectionFound == FALSE)
    {
        printf("섹션을 찾지 못함\n");
        system("pause"); return 1;
    }
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
                isKeyFound = TRUE;
                break;
            }
        }
    }

    if (isKeyFound==FALSE)
    {
        printf("섹션내 키를 찾지 못함\n");
        system("pause"); return 2;
    }

    // "inikey = inivalue" <--- value = "= inivalue"
    value = strstr(buff, "=");
    if (value != NULL)
    {
        printf("value found!!!\n");
        isValueFound = TRUE;
        // value = " inivalue";
        value = value + strlen("=");
    }

    if (isValueFound == FALSE)
    {
        printf("값을 찾지 못함\n");
        system("pause"); return 0;
    }

    // ltrim
    while (*value != '\0')
    {
        if ((*value) == ' ' || (*value) == '\t' || (*value) == '\n')
        {
            value++;
        }
        else
        {
            break;
        }
    }
    printf("%s\n", value);
    // rtrim
    char * end = value + strlen(value) - 1;
    while (end >= value)
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