/*
2016-09-21 �ǽ� 2-4
������ 6���� ��2-4-out.txt�� ���Ͽ� ����Ͻÿ�.
*/

#include <stdio.h>
#include <Windows.h>

int main()
{
    // ��ġ ����. (File Pointer)
    FILE * fp;

    // ��ġ(���� ������) OPEN
    //fp = fopen("2-4-out.txt", "w"); /* C ǥ�� */
    fopen_s(&fp, "2-4-out.txt", "w"); /* ����ũ�� ����Ʈ C ������ ��� */

    int dan;
    dan = 6;

    // ��ġ(���� ������) ���� : ����
    fprintf(fp, "������ %d��\n", dan);

    int i;
    for (i = 1; i < 10; i++)
    {
        // ��ġ(���� ������) ���� : ����
        fprintf(fp, "%d * %d = %d\n", dan, i, dan * i);
    }

    // ��ġ(���� ������) CLOSE
    fclose(fp);

    system("pause");
    return 0;
}