#include<stdio.h>
#include<windows.h>

// �ִ밪
int max_arr(int * arr, int size)
{
    int ret = arr[0];
    int i;
    for (i = 1; i < size; i++)
    {
        if (ret < arr[i])
        {
            ret = arr[i];
        }
    }
    return ret;
}

// �ּҰ�
int min_arr(int * arr, int size)
{
    int ret = arr[0];
    int i;
    for (i = 1; i < size; i++)
    {
        if (ret > arr[i])
        {
            ret = arr[i];
        }
    }
    return ret;
}

// ����
int sum(int * arr, int size)
{
    int ret = 0;
    int i;
    for (i = 0; i < size; i++)
    {
        ret += arr[i];
    }
    return ret;
}

// ���
double average(int * arr, int size)
{
    return (double)sum(arr, size) / size;
}

int main()
{
    int num[] = {11, 5, -4 , 83, 0, 47, -52, 39};
    int arr_size = sizeof(num) / sizeof(int);

    printf("�־��� ������ �ִ밪 = %d \n", max_arr(num, arr_size));
    printf("�־��� ������ �ּҰ� = %d \n", min_arr(num, arr_size));
    printf("�־��� ������ ���� = %d \n", sum(num, arr_size));
    printf("�־��� ������ ��� = %lf \n", average(num, arr_size));

    system("pause");
    return 0;
}