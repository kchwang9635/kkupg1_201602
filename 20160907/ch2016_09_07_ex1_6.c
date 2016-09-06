#include<stdio.h>

/* 2016-09-07
  실습1-6) 삼각형의 밑변과 높이를 입력 받아 넓이를 출력하시오
*/

#define _USE_MATH_DEFINES
#include <math.h>

void ch2016_09_07_ex1_6(void)
{
    double w;
    double h;
    printf("삼각형의 밑변 길이를 입력하세요: ");
    scanf_s("%lf", &w);
    printf("삼각형의 높이를 입력하세요 : ");
    scanf_s("%lf", &h);
    
    printf("삼각형의 넓이는 %.2f 입니다.\n", w*h/2);
}

int main(void)
{
    ch2016_09_07_ex1_6();

    system("PAUSE");

    return 0;
}