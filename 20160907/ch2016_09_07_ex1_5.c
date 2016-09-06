#include<stdio.h>

/* 2016-09-07 
   실습1-5) 원의 반지름을 입력 받아 둘레와 면적을 출력하시오
*/

#define _USE_MATH_DEFINES
#include <math.h>

void ch2016_09_07_ex1_5_r1(void)
{
    printf("원의 반지름을 입력하세요 : ");
    double r;
    scanf_s("%lf", &r);
    printf("반지름 %.2f 인 원 의 둘레는 %.2f m 이고, 면적은 %.2f m^2 입니다.\n", 
        r,
        r * 2 * M_PI,
        r * r * M_PI);
}


void ch2016_09_07_ex1_5_r2(void)
{
    printf("원의 반지름을 입력하세요 : ");
    double r;
    scanf_s("%lf", &r);
    double cicum = 2 * r * M_PI;
    double area = r * r * M_PI;
    printf("반지름 %.2f 인 원 의 둘레는 %.2f m 이고, 면적은 %.2f m^2 입니다.\n",
        r,
        cicum,
        area);
}


void ch2016_09_07_ex1_5_r3(void)
{
    printf("원의 반지름을 입력하세요 : ");
    double r;
    scanf_s("%lf", &r);
    double cicum = 2 * r * M_PI;
    double area = pow(r , 2) * M_PI;
    printf("반지름 %.2f 인 원 의 둘레는 %.2f m 이고, 면적은 %.2f m^2 입니다.\n",
        r,
        cicum,
        area);
}

int main(void)
{
    ch2016_09_07_ex1_5_r1();
    ch2016_09_07_ex1_5_r2();
    ch2016_09_07_ex1_5_r3();
    
    system("PAUSE");

    return 0;
}