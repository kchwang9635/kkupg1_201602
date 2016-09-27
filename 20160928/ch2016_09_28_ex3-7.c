/*
2016-09-28 �ǽ� 3-7
��3-7-out.csv�� ��  y=1 ,  x=-1~1 ��  ���а��� ����ϰ�, �׷����� �׷����ô�.
*/
#include<stdio.h>
#include<Windows.h>
#define _USE_MATH_DEFINES
#include<math.h>
// y=1 ���
void y_eq_1()
{
    double x;
    FILE * fp;
    fopen_s(&fp, "d:\\3-7-out-����.csv", "w");
    fprintf(fp, "y=1  (x=-1~1)\n");
    fprintf(fp, "x,y\n");
    for (x = -1; x <= 1; x = x + 0.01)
    {
        fprintf(fp, "%0.5lf, %0.5lf\n", x, 1.0);
    }
    fclose(fp);
}

// y=1 �� ���� x=-1~1����
void dy_y_eq_1()
{
    double x[200] , y[200], dy[200], delta;
    int i;
    FILE * fp;

    x[0] = -1;
    delta = 0.01;
    // x �迭 �Ҵ� -1~1
    for (i = 1; i < 200; i++)
    {
        x[i] = x[i-1] + delta;
    }
    //  y �迭 �Ҵ� 1
    for (i = 0; i < 200; i++)
    {
        y[i] = 1;
    }

    // dy = sum(y * delta)
    dy[0] = 0;
    for (i = 1; i < 200; i++)
    {
        //dy[i] = dy[i-1] + (y[i] * (x[i] - x[i - 1]));
        dy[i] = dy[i-1] + (y[i] * delta) ; // delta == (x[i] - x[i - 1])
    }

    fopen_s(&fp, "d:\\3-7-out.csv", "w");
    fprintf(fp, "y=1  (x=-1~1)\n");
    fprintf(fp, "x,dy\n");
    for (i = 0; i < 200;i++)
    {
        fprintf(fp, "%0.6lf, %0.6lf\n", x[i], dy[i]);
    }
    fclose(fp);
}


int main(void)
{
    y_eq_1();
    dy_y_eq_1();

    system("pause");
    return 0;
}