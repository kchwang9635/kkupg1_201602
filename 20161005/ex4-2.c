/*
임의의 숫자 몇 개를 정하고, 그 평균을 출력하시오
*/
#include<stdio.h>
#include<Windows.h>
#define ARR_SIZE 5
int main()
{
    int num[] = { 23, 8, 7, 11, 47 };
    int sum;
    double avr;
    int i;
    sum = 0;
    for (i = 0; i < ARR_SIZE; i++)
    {
        sum = sum + num[i];
    }
    avr = (double)sum / ARR_SIZE ;

    for (i = 0; i < ARR_SIZE ; i++)
    {
        printf("%d ", num[i]);
    }
    printf("에서 \n평균값은 %lf\n", avr);
    
    system("pause");
    return 0;
}