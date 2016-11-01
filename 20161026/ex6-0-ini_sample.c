#include<stdio.h>
#include<windows.h>

int main()
{
    char buff[256];
    GetPrivateProfileString("구구단", "keyvalue", "" , buff, sizeof(buff) , "e:\\ini.ini");
    if (strcmp(buff, "") == 0)
    {
        WritePrivateProfileString("구구단", "keyvalue", "defalut-value", "e:\\ini.ini");
        GetPrivateProfileString("구구단", "keyvalue", "", buff, sizeof(buff), "e:\\ini.ini");
    }
    printf("%s\n", buff);

    int num;
    num = GetPrivateProfileInt("SEC", "keyint", -1, "e:\\ini.ini");
    if (num == -1)
    {
        WritePrivateProfileString("SEC", "keyint", "123", "e:\\ini.ini");
        num = GetPrivateProfileInt("SEC", "keyint", 0, "e:\\ini.ini");
    }
    
    printf("%d\n", num);
    system("pause");
    return 0;
}
