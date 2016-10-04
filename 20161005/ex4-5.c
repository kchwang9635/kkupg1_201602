/*
행렬의 전치행렬(transpose)을 출력하시오.
*/
#include<stdio.h>
#include<Windows.h>
#define ROW_SIZE1 2
#define COL_SIZE1 2
#define ROW_SIZE2 3
#define COL_SIZE2 2

int main()
{
    int m1[ROW_SIZE1][COL_SIZE1] = { { 1, 2 }, { 3, 4 } };
    int tm1[COL_SIZE1][ROW_SIZE1];
    int m2[ROW_SIZE2][COL_SIZE2] = { { 1, 2 }, { 3, 4 }, { 5, 6 } };
    int tm2[COL_SIZE1][ROW_SIZE2];
    int i, k;

    // 계산 tm1
    for (i = 0; i < ROW_SIZE1; i++)
    {
        for (k = 0; k < COL_SIZE1; k++)
        {
            tm1[k][i] = m1[i][k];
        }
    }
    // 계산 tm2
    for (i = 0; i < ROW_SIZE2; i++)
    {
        for (k = 0; k < COL_SIZE2; k++)
        {
            tm2[k][i] = m2[i][k];
        }
    }

    // 출력
    printf("m1=\n");
    for (i = 0; i < ROW_SIZE1; i++)
    {
        for (k = 0; k < COL_SIZE1; k++)
        {
            printf("%d ", m1[i][k]);
        }
        printf("\n");
    }
    printf("tm1=\n");
    for (i = 0; i < COL_SIZE1; i++)
    {
        for (k = 0; k < ROW_SIZE1; k++)
        {
            printf("%d ", tm1[i][k]);
        }
        printf("\n");
    }
    printf("m2=\n");
    for (i = 0; i < ROW_SIZE2; i++)
    {
        for (k = 0; k < COL_SIZE2; k++)
        {
            printf("%d ", m2[i][k]);
        }
        printf("\n");
    }
    printf("tm2=\n");
    for (i = 0; i < COL_SIZE2; i++)
    {
        for (k = 0; k < ROW_SIZE2; k++)
        {
            printf("%d ", tm2[i][k]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}


