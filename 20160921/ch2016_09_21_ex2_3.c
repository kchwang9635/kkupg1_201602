/*
2016-09-21 �ǽ� 2-3
�������� 7m�� ���� �ѷ��� ������ ��2-3-out.txt�� ���Ͽ� ����Ͻÿ�
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
    //fp = fopen("2-3-out.txt", "w"); /* C ǥ�� */
    fopen_s(&fp, "2-3-out.txt", "w"); /* ����ũ�� ����Ʈ C ������ ��� */

    double r, cic, area;
    //������
    r = 7.0;
    //�ѷ�
    cic = 2 * r * M_PI;
    //����
    area = pow(r, 2) * M_PI;

    // ��ġ(���� ������) ���� : ����
    fprintf(fp, "������ %.2f m �� �� �� �ѷ��� %.2f m �̰�, ������ %.2f m^2 �Դϴ�.\n", r, cic, area);

    // ��ġ(���� ������) CLOSE
    fclose(fp);

    system("pause");
    return 0;
}