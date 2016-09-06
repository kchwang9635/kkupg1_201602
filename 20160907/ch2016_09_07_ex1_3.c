#include<stdio.h>

/* 2016-09-07
실습1-2) 반지름이 7m인 원의 둘레와 면적을 출력하시오.
*/

void ch2016_09_07_ex1_3_r1(void)
{
    printf("반지름 7 인 원 의 둘레는 %f m 이고, 면적은 %f m^2 입니다.\n", 
        7 * 2 * 3.14,
        7 * 7 * 3.13);
}


void ch2016_09_07_ex1_3_r2(void)
{
    printf("반지름 7 인 원 의 둘레는 %.2f m 이고, 면적은 %.2f m^2 입니다.\n",
        7 * 2 * 3.14,
        7 * 7 * 3.14);
}


void ch2016_09_07_ex1_3_r3(void)
{
    double pi = 3.14;
    printf("반지름 7 인 원 의 둘레는 %.2f m 이고, 면적은 %.2f m^2 입니다.\n",
        7 * 2 * pi,
        7 * 7 * pi);
}


#define _USE_MATH_DEFINES
#include <math.h>
void ch2016_09_07_ex1_3_r4(void)
{
    printf("반지름 7 인 원 의 둘레는 %.2f m 이고, 면적은 %.2f m^2 입니다.\n",
        7 * 2 * M_PI,
        7 * 7 * M_PI);
}


void ch2016_09_07_ex1_3_r5(void)
{
    printf("반지름 7 인 원 의 둘레는 %.2f m 이고, 면적은 %.2f m^2 입니다.\n",
        7 * 2 * M_PI,
        pow(7, 2) * M_PI);
}


int main(void)
{
    ch2016_09_07_ex1_3_r1();
    ch2016_09_07_ex1_3_r2();
    ch2016_09_07_ex1_3_r3();
    ch2016_09_07_ex1_3_r4();
    ch2016_09_07_ex1_3_r5();

    getchar();

    return 0;
}