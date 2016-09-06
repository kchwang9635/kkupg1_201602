#include<stdio.h>

/* 2016-09-07 
   실습 1-2) 구구단 6단을 출력하시오.
*/

void ch2016_09_07_ex1_4_r1(void)
{
    int i;
    printf("구구단6단\n");
    printf("6*1=6\n");
    printf("6*2=12\n");
    printf("6*3=18\n");
    printf("6*4=24\n");
    printf("6*5=30\n");
    printf("6*6=36\n");
    printf("6*7=42\n");
    printf("6*8=48\n");
    printf("6*9=54\n");
}


void ch2016_09_07_ex1_4_r2(void)
{
    int i;
    printf("구구단6단\n");
    printf("6*1=%d\n", 6);
    printf("6*2=%d\n", 12);
    printf("6*3=%d\n", 18);
    printf("6*4=%d\n", 24);
    printf("6*5=%d\n", 30);
    printf("6*6=%d\n", 36);
    printf("6*7=%d\n", 42);
    printf("6*8=%d\n", 48);
    printf("6*9=%d\n", 54);
}


void ch2016_09_07_ex1_4_r3(void)
{
    int i;
    printf("구구단6단\n");
    printf("6*1=%d\n", 6*1);
    printf("6*2=%d\n", 6*2);
    printf("6*3=%d\n", 6*3);
    printf("6*4=%d\n", 6*4);
    printf("6*5=%d\n", 6*5);
    printf("6*6=%d\n", 6*6);
    printf("6*7=%d\n", 6*7);
    printf("6*8=%d\n", 6*8);
    printf("6*9=%d\n", 6*9);
}


void ch2016_09_07_ex1_4_r4(void)
{
    int i;
    printf("구구단6단\n");
    i = 1;
    while (i < 10)
    {
        printf("6*%d=%d\n", i, 6 * i);
        i++;
    }
}


void ch2016_09_07_ex1_4_r5(void)
{
    int i;
    printf("구구단6단\n");
    for (i = 1; i < 10; i++)
    {
        printf("6*%d=%d\n", i, 6*i);
    }
}



int main(void)
{
    ch2016_09_07_ex1_4_r1();
    ch2016_09_07_ex1_4_r2();
    ch2016_09_07_ex1_4_r3();
    ch2016_09_07_ex1_4_r4();
    ch2016_09_07_ex1_4_r5();

    getchar();

    return 0;
}