#include<stdio.h>

/* 2016-09-07 
   실습1-1) 화면에 학번, 이름을 출력하는 프로그램을 작성하시오
*/

void ch2016_09_07_ex1_1_r1(void)
{
    puts("학번:201609070900");
    puts("이름 : 홍길동");
}

void ch2016_09_07_ex1_1_r2(void)
{
    printf("학번:201609070900\n");
    printf("이름 : 홍길동\n");
}


void ch2016_09_07_ex1_1_r3(void)
{
    printf("학번:201609070900\n이름 : 홍길동\n");
}


int main(void)
{
    ch2016_09_07_ex1_1_r1();
    ch2016_09_07_ex1_1_r2();
    ch2016_09_07_ex1_1_r3();

    getchar();

    return 0;
}