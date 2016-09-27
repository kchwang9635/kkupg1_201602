/*
2016-09-28 실습 3-5
“3-5-out.csv” 에  y=sin(x)^2 의 값을 출력하고, 그래프를 그려봅시다.
*/
#include<stdio.h>
#include<Windows.h>
#define _USE_MATH_DEFINES
#include<math.h>
int main(void)
{
    double x;
    FILE * fp;
    fopen_s(&fp, "d:\\3-5-out.csv", "w");
    fprintf(fp, "y=sin(x)^2  (x=-2pi~2pi)\n");
    fprintf(fp, "x,y\n");
    for (x = -2; x<= 2; x=x+0.05)
    {
        fprintf(fp, "%0.4lf, %0.4lf\n", x, pow(sin(x * M_PI),2));
    }
    fclose(fp);

    system("pause");
    return 0;
}