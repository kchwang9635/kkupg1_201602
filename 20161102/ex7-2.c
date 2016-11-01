#include<stdio.h>
#include<windows.h>

/*
"d:\ini.ini" ���� ����

[SECTION]
keyvalue=defalut-value
[SEC]
key = ��ã��
keyint=1233
[������]
key=8��
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
            // isspace "���� , �ٹٲ�, ��"  ���� Ȯ��
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
        printf("������ ã�� ����\n");
        system("pause"); return 1;
    }
    
    isKeyFound = FindKey(fp, key);
    if (isKeyFound==FALSE)
    {
        printf("���ǳ� Ű�� ã�� ����\n");
        system("pause"); return 2;
    }
    
    isValueFound = FindValue(&value);
    if (isValueFound == FALSE)
    {
        printf("���� ã�� ����\n");
        system("pause"); return 0;
    }

    value = trim(value);
    printf("Ű \"%s\" �� ���� \"%s\"\n", key, value);

    // ���
    /*
    section found!!!
    key found!!!
    value found!!!
    ��ã��

    Ű "key" �� ���� "��ã��"
    */

    system("pause");
    return 0;
}