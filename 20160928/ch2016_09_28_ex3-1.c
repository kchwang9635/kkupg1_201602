/*
2016-09-28 실습 3-1
“3-1-out.csv” 에  y=x^2 의 값을 출력하고, 그래프를 그려봅시다.
*/
#include<stdio.h>
#include<Windows.h>
#include<math.h>
int main(void)
{
    double x;
    FILE * fp;
    fopen_s(&fp, "d:\\3-1-out.csv", "w");
    fprintf(fp, "y=x^2  (x=-10~10)\n");
    fprintf(fp, "x,y\n");
    for (x = -10; x<= 10; x=x+0.1)
    {
        fprintf(fp, "%0.2lf, %0.2lf\n",x, pow(x,2));
    }
    fclose(fp);

    system("pause");
    return 0;
}