#include<stdio.h>
#include<windows.h>

int main()
{
    FILE * fp;
    char section[] = "[SEC]";
    char key[] = "key";
    char keyint[] = "keyint";
    fopen_s(&fp, "d:\\ini.ini", "r");
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
    if (isSectionFound)
    {
        while (feof(fp) == FALSE)
        {
            fgets(buff, sizeof(buff), fp);
            if (buff[0] == '[')
            {
                // section end
                break;
            }
            if (strncmp(buff , key, strlen(key)) == 0)
            {
                char c = *(buff + strlen(key));
                // isspace "°ø¹é , ÁÙ¹Ù²Þ, ÅÇ"  ¿©ºÎ È®ÀÎ
                if (c==' ' || c == '\t' || c == '=' )
                {
                    printf("key found!!!\n");
                    isKeyFound = TRUE;
                    break;
                }
            }
        }
    }
    if (isKeyFound)
    {
        // "inikey = inivalue" <--- value = "= inivalue"
        value = strstr(buff, "=");
        if (value != NULL)
        {
            printf("value found!!!\n");
            isValueFound = TRUE;
            // value = " inivalue";
            value = value + strlen("=");
        }
        
    }
    if (isValueFound)
    {
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
        char * end = value + strlen(value)-1;
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
        printf("%s\n", value);
    }
    system("pause");
    return 0;
}