/*
2016-09-21 �ǽ� 2-5
��2-5-out.txt�� ���Ͽ� ���� �������� �Է� �޾� �ѷ��� ������ ����Ͻÿ�
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
    //fp = fopen("2-5-out.txt", "w"); /* C ǥ�� */
    fopen_s(&fp, "2-5-out.txt", "w"); /* ����ũ�� ����Ʈ C ������ ��� */

    printf("���� �������� �Է��ϼ��� : ");
    
    double r;
    scanf_s("%lf", &r); /* ����ũ�� ����Ʈ C ������ ��� */
    
    double cicum, area;
    // �ѷ�
    cicum = 2 * r * M_PI;
    // ����
    area = pow(r,2) * M_PI;

    // ��ġ(���� ������) ���� : ����
    fprintf(fp, "������ %.2f �� �� �� �ѷ��� %.2f m �̰�, ������ %.2f m^2 �Դϴ�.\n", r, cicum, area);

    
    // ��ġ(���� ������) CLOSE
    fclose(fp);

    system("pause");
    return 0;
}