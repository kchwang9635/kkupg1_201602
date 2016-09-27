/*
2016-09-28 실습 3-6
“3-6-out.csv” 에  y=cos(3x)+2sin(x) 의 값을 출력하고, 그래프를 그려봅시다.
*/
#include<stdio.h>
#include<Windows.h>
#define _USE_MATH_DEFINES
#include<math.h>
int main(void)
{
    double x;
    FILE * fp;
    fopen_s(&fp, "d:\\3-6-out.csv", "w");
    fprintf(fp, "y=cos(3x)+2sin(x)  (x=-2pi~2pi)\n");
    fprintf(fp, "x,y\n");
    for (x = -2; x<= 2; x=x+0.01)
    {
        fprintf(fp, "%0.5lf, %0.5lf\n", x, cos(3*x*M_PI) + 2*sin(x*M_PI));
    }
    fclose(fp);

    system("pause");
    return 0;
}