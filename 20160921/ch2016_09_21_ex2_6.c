/*
2016-09-21 �ǽ� 2-6
�ﰢ���� �غ��� ���̸� �Է� �޾� ���̸� ��2-6-out.txt�� ���Ͽ� ����Ͻÿ�
*/

#include <stdio.h>
#include <Windows.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
    // ��ġ ����. (File Pointer)
    FILE * fp;

    // ��ġ(���� ������) OPEN
    //fp = fopen("2-6-out.txt", "w"); /* C ǥ�� */
    fopen_s(&fp, "2-6-out.txt", "w"); /* ����ũ�� ����Ʈ C ������ ��� */

    double width, height, area;
    printf("�ﰢ���� �غ� ���̸� �Է��ϼ���: ");
    scanf_s("%lf", &width);
    printf("�ﰢ���� ���̸� �Է��ϼ��� : ");
    scanf_s("%lf", &height);

    area = width * height / 2;

    // ��ġ(���� ������) ���� : ����
    fprintf(fp, "�غ��� %.2f �̰� ���� %.2f �� �ﰢ���� ���̴� %.2f �Դϴ�.\n", width, height, area);

    // ��ġ(���� ������) CLOSE
    fclose(fp);

    system("pause");
    return 0;
}