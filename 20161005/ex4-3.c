/*
������ ���� �� ���� ���ϰ�, �� ����� ����Ͻÿ�
*/
#include<stdio.h>
#include<Windows.h>
#define ARR_SIZE 5
int main()
{
    int num[ARR_SIZE] = { 23, 8, 7, 11, 47 };
    int ascending[ARR_SIZE], descending[ARR_SIZE];
    int i, k, temp;
    /*
    for (i = 0; i < ARR_SIZE; i++)
    {
        ascending[i] = num[i];
        descending[i] = num[i];
    }
    */
    memcpy(descending, num, ARR_SIZE * sizeof(int));
    memcpy(ascending, num, ARR_SIZE * sizeof(int));
    

    // ��������
    for (i = 0; i < ARR_SIZE; i++)
    {
        for (k = 0; k < ARR_SIZE - 1; k++)
        {
            if (descending[k] < descending[k + 1])
            {
                /* ��ġ ���� */
                temp = descending[k];
                descending[k] = descending[k + 1];
                descending[k + 1] = temp;
            }
        }
    }

    // �ø�����
    for (i = 0; i < ARR_SIZE; i++)
    {
        for (k = 0; k < ARR_SIZE - 1; k++)
        {
            if (ascending[k] > ascending[k + 1])
            {
                /* ��ġ ���� */
                temp = ascending[k];
                ascending[k] = ascending[k + 1];
                ascending[k + 1] = temp;
            }
        }
    }
    
    for (i = 0; i < ARR_SIZE; i++)
    {
        printf("%d ", num[i]);
    }
    printf("���� \n��������:");
    for (i = 0; i < ARR_SIZE; i++)
    {
        printf("%d ", descending[i]);
    }
    printf("\n��������:");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", ascending[i]);
    }
    printf("\n");
    
    system("pause");
    return 0;
}

