/*
2016-09-21 �ǽ� 2-2
��2-2-out.txt�� ���Ͽ� �غ� 213mm ���� 41mm �� �ﰢ���� ���̸� �����Ͻÿ�.
*/

#include <stdio.h>
#include <Windows.h>
int main()
{
    // ��ġ ����. (File Pointer)
    FILE * fp;

    // ��ġ(���� ������) OPEN
    //fp = fopen("2-2-out.txt", "w"); /* C ǥ�� */
    fopen_s(&fp, "2-2-out.txt", "w"); /* ����ũ�� ����Ʈ C ������ ��� */

    double height, width, area;
    height = 213.0;
    width = 41.0;

    area = height * width / 2.0;

    // ��ġ(���� ������) ���� : ����
    fprintf(fp, "�غ��� %.2f mm �̰� ���̰� %.2f mm�� �ﰢ���� ���̴� %.2f mm^2 �Դϴ�.\n", height, width, area);

    // ��ġ(���� ������) CLOSE
    fclose(fp);

    system("pause");
    return 0;
}