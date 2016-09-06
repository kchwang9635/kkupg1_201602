#include<stdio.h>

/* 2016-09-07 
   실습1-2) 밑변 210mm 높이 43mm 인 삼각형의 넓이를 출력하시오
*/

void ch2016_09_07_ex1_2_r1(void)
{
    printf("밑변이 211mm 이고 높이가 43mm인 삼각형의 넓이는 %f mm^2 입니다.\n" , 211.0 * 43.0 / 2.0);
}


void ch2016_09_07_ex1_2_r2(void)
{
    printf("밑변이 %fmm 이고 높이가 %fmm인 삼각형의 넓이는 %f mm^2 입니다.\n", 
        211.0, 
        43.0, 
        211.0 * 43.0 / 2.0);
}


void ch2016_09_07_ex1_2_r3(void)
{
    double width = 211;
    double height = 43;
    printf("밑변이 %fmm 이고 높이가 %fmm인 삼각형의 넓이는 %f mm^2 입니다.\n",
        width,
        height,
        width * height / 2.0);
}


void ch2016_09_07_ex1_2_r4(void)
{
    double width = 211;
    double height = 43;
    double area = width * height / 2.0;
    printf("밑변이 %fmm 이고 높이가 %fmm인 삼각형의 넓이는 %f mm^2 입니다.\n",
        width,
        height,
        area);
}


void ch2016_09_07_ex1_2_r5(void)
{
    double width = 211;
    double height = 43;
    double area = width * height / 2.0;
    printf("밑변이 %.0fmm 이고 높이가 %.0fmm인 삼각형의 넓이는 %.2fmm^2 입니다.\n",
        width,
        height,
        area);
}


int main(void)
{
    ch2016_09_07_ex1_2_r1();
    ch2016_09_07_ex1_2_r2();
    ch2016_09_07_ex1_2_r3();
    ch2016_09_07_ex1_2_r4();
    ch2016_09_07_ex1_2_r5();

    getchar();

    return 0;
}