/*
������ ���� �� ���� ���ϰ�, �� �߿��� �ִ밪�� �ּҰ��� ����Ͻÿ�.
*/
#include<stdio.h>
#include<Windows.h>
#define ARR_SIZE 5
int main()
{
    int num[] = { 23, 8, 7, 11, 47 };
    int max, min;
    int i;
    max = num[0];
    for (i = 1; i < ARR_SIZE; i++)
    {
        if (max < num[i])
        {
            max = num[i];
        }
    }
    min = num[0];
    for (i = 1; i < ARR_SIZE; i++)
    {
        if (min > num[i])
        {
            min = num[i];
        }
    }

    for (i = 0; i < ARR_SIZE; i++)
    {
        printf("%d ", num[i]);
    }
    printf("�߿��� \n�ִ밪�� %d, �ּҰ��� %d\n", max, min);
    
    system("pause");
    return 0;
}