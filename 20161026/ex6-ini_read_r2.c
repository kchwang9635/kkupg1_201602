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
        printf("������ ã�� ����\n");
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
            // isspace "���� , �ٹٲ�, ��"  ���� Ȯ��
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
        printf("���ǳ� Ű�� ã�� ����\n");
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
        printf("���� ã�� ����\n");
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