/*
2016-09-21 �ǽ� 2-1
��2-1-out.txt�� ���Ͽ� �й�, �̸��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

#include <stdio.h>
#include <Windows.h>
int main()
{
    // ��ġ ����. (File Pointer)
    FILE * fp;

    // ��ġ(���� ������) OPEN
    //fp = fopen("2-1-out.txt", "w"); /* C ǥ�� */
    fopen_s(&fp, "2-1-out.txt", "w"); /* ����ũ�� ����Ʈ C ������ ��� */

    // ��ġ(���� ������) ���� : ����
    fprintf(fp, "�й�:201609070900\n");
    fprintf(fp, "�̸�:ȫ�浿\n");

    // ��ġ(���� ������) CLOSE
    fclose(fp);

    system("pause");
    return 0;
}