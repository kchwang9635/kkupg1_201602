/*
2016-09-21 �ǽ� 2-7
��2-7-out.txt�� ���Ͽ� ���� �������� ��d:\\2-7-in.txt������ �о�, �ѷ��� ������ ����Ͻÿ�
*/

#include <stdio.h>
#include <Windows.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
    //*******************************************
    //***************** �б� ********************
    //*******************************************
    // ��ġ ����. (File Pointer)
    FILE * fp_in;

    // ��ġ(���� ������) OPEN
    fopen_s(&fp_in, "d:\\2-7-in.txt", "r");

    // ���� ������ �̻��� ������ Ȯ��
    if (fp_in == 0)
    {
        printf("������ �����ϴ�\n");
        system("pause");
        return 1;
    }

    double r;
    // ��ġ(���� ������) ���� :  �б�
    fscanf_s(fp_in, "%lf", &r);
    // ��ġ(���� ������) CLOSE
    fclose(fp_in);

    //*******************************************
    //***************** ���� ********************
    //*******************************************
    // ��ġ ����. (File Pointer)
    FILE * fp;
    // ��ġ(���� ������) OPEN
    fopen_s(&fp, "d:\\2-7-out.txt", "w");

    double cicum, area;
    // �ѷ�
    cicum = 2 * r * M_PI;
    // ����
    area = pow(r, 2) * M_PI;

    // ��ġ(���� ������) ���� : ����
    fprintf(fp, "������ %.2f �� �� �� �ѷ��� %.2f m �̰�, ������ %.2f m^2 �Դϴ�.\n", r, cicum, area);

    // ��ġ(���� ������) CLOSE
    fclose(fp);

    system("pause");
    return 0;
}
