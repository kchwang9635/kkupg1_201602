#include<stdio.h>
#include<windows.h>

int main()
{
    int dan, i, output;
    char buff[256];
    FILE * fp;
    const char INI_FILE[] = "e:\\ex6-2.ini";
    GetPrivateProfileString("구구단", "단", "", buff, sizeof(buff), INI_FILE);
    if (strcmp(buff, "") == 0)
    {
        WritePrivateProfileString("구구단", "단",  "8", INI_FILE);
        WritePrivateProfileString("구구단", "output", "0", INI_FILE);
    }
    GetPrivateProfileString("구구단", "단", "", buff, sizeof(buff), INI_FILE);
    dan = atoi(buff);
    GetPrivateProfileString("구구단", "output", "", buff, sizeof(buff), INI_FILE);
    output = atoi(buff);

    switch (output)
    {
    case 1: // 0 화면, 1 txt
        fopen_s(&fp, "e:\\ex6-2.txt", "w");
        break;
    default:
        break;
    }

    for (i = 1; i < 10; i++)
    {
        // 0 화면, 1 txt
        switch (output)
        {
        case 0: // 0 화면, 1 txt
            printf("%d * %d = %d\n", dan, i, dan * i);
            break;
        case 1: // 0 화면, 1 txt
            fprintf(fp , "%d * %d = %d\n", dan, i, dan * i);
            break;
        default:
            break;
        }
        
    }

    switch (output)
    {
    case 1: // 0 화면, 1 txt
        fclose(fp);
        break;
    default:
        break;
    }
    
    system("pause");
    return 0;
}
