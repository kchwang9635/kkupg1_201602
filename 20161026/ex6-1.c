#include<stdio.h>
#include<windows.h>

int main()
{
    char buff[256];
    int height, width;
    const char INI_FILE[] = "e:\\ex6-1.ini";
    GetPrivateProfileString("삼각형", "높이", "", buff, sizeof(buff), INI_FILE);
    if (strcmp(buff, "") == 0)
    {
        WritePrivateProfileString("삼각형", "높이", "3", INI_FILE);
        WritePrivateProfileString("삼각형", "밑변", "7", INI_FILE);
        
    }
    GetPrivateProfileString("삼각형", "높이", "", buff, sizeof(buff), INI_FILE);
    height = atoi(buff);

    GetPrivateProfileString("삼각형", "밑변", "", buff, sizeof(buff), INI_FILE);
    width = atoi(buff);
    
    printf("높이 %d,  밑변 %d 삼각형의 면적은 %lf.\n", height , width , (double)height * width / 2);
    
    system("pause");
    return 0;
}