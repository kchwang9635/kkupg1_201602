/*
2016-09-28 실습 3-4
“3-4-out.csv” 에  y=cos(x) 의 값을 출력하고, 그래프를 그려봅시다.
*/
#include<stdio.h>
#include<Windows.h>
#define _USE_MATH_DEFINES
#include<math.h>
int main(void)
{
    double x;
    FILE * fp;
    fopen_s(&fp, "d:\\3-4-out.csv", "w");
    fprintf(fp, "y=cos(x)  (x=-2pi~2pi)\n");
    fprintf(fp, "x,y\n");
    for (x = -2; x<= 2; x=x+0.1)
    {
        fprintf(fp, "%0.4lf, %0.4lf\n", x, cos(x * M_PI));
    }
    fclose(fp);

    system("pause");
    return 0;
}