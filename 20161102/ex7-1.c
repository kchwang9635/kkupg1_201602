#include<stdio.h>
#include<windows.h>

// 최대값
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

// 최소값
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

// 총합
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

// 평균
double average(int * arr, int size)
{
    return (double)sum(arr, size) / size;
}

int main()
{
    int num[] = {11, 5, -4 , 83, 0, 47, -52, 39};
    int arr_size = sizeof(num) / sizeof(int);

    printf("주어진 숫자의 최대값 = %d \n", max_arr(num, arr_size));
    printf("주어진 숫자의 최소값 = %d \n", min_arr(num, arr_size));
    printf("주어진 숫자의 총합 = %d \n", sum(num, arr_size));
    printf("주어진 숫자의 평균 = %lf \n", average(num, arr_size));

    system("pause");
    return 0;
}