#include<stdio.h>
#include<windows.h>

int main()
{
    char buff[256];
    int height, width;
    const char INI_FILE[] = "e:\\ex6-1.ini";
    GetPrivateProfileString("�ﰢ��", "����", "", buff, sizeof(buff), INI_FILE);
    if (strcmp(buff, "") == 0)
    {
        WritePrivateProfileString("�ﰢ��", "����", "3", INI_FILE);
        WritePrivateProfileString("�ﰢ��", "�غ�", "7", INI_FILE);
        
    }
    GetPrivateProfileString("�ﰢ��", "����", "", buff, sizeof(buff), INI_FILE);
    height = atoi(buff);

    GetPrivateProfileString("�ﰢ��", "�غ�", "", buff, sizeof(buff), INI_FILE);
    width = atoi(buff);
    
    printf("���� %d,  �غ� %d �ﰢ���� ������ %lf.\n", height , width , (double)height * width / 2);
    
    system("pause");
    return 0;
}