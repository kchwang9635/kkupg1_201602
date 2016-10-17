/*
임의의 두 행렬을 정하고, 행렬 덧셈을 하여 출력 하시오.
*/
#include<stdio.h>
#include<Windows.h>
#define ROW_SIZE 2
#define COL_SIZE 2

int main()
{
    int m1[ROW_SIZE][COL_SIZE] = { { 1, 2 }, { 3, 4 } };
    int m2[ROW_SIZE][COL_SIZE] = { { 5, 6 }, { 7, 8 } };
    int result[ROW_SIZE][COL_SIZE];
    int i, k;

    // 계산
    for (i = 0; i < ROW_SIZE; i++)
    {
        for (k = 0; k < COL_SIZE; k++)
        {
            result [i][k] = m1[i][k] + m2[i][k];
        }
    }

    // 출력
    printf("m1=\n");
    for (i = 0; i < ROW_SIZE; i++)
    {
        for (k = 0; k < COL_SIZE; k++)
        {
            printf("%d ", m1[i][k]);
        }
        printf("\n");
    }
    printf("m2=\n");
    for (i = 0; i < ROW_SIZE; i++)
    {
        for (k = 0; k < COL_SIZE; k++)
        {
            printf("%d ", m2[i][k]);
        }
        printf("\n");
    }
    printf("result=\n");
    for (i = 0; i < ROW_SIZE; i++)
    {
        for (k = 0; k < COL_SIZE; k++)
        {
            printf("%d ", result[i][k]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}


