/*
임의의 숫자 몇 개를 정하고, 그 평균을 출력하시오
*/
#include<stdio.h>
#include<Windows.h>
#define ARR_SIZE 5
int main()
{
	int num[ARR_SIZE] = { 23, 8, 7, 11, 47 };
	int ascending[ARR_SIZE], descending[ARR_SIZE];
	int i, k, temp;
	/*
	for (i = 0; i < ARR_SIZE; i++)
	{
	ascending[i] = num[i];
	descending[i] = num[i];
	}
	*/
	memcpy(descending, num, ARR_SIZE * sizeof(int));
	memcpy(ascending, num, ARR_SIZE * sizeof(int));


	// 내림차순
	for (i = 0; i < ARR_SIZE-1; i++)
	{
		for (k = i; k < ARR_SIZE; k++)
		{
			if (descending[i] < descending[k])
			{
				/* 위치 변경 */
				temp = descending[k];
				descending[k] = descending[i];
				descending[i] = temp;
			}
		}
	}

	// 올림차순
	for (i = 0; i < ARR_SIZE-1; i++)
	{
		for (k = i+1; k < ARR_SIZE; k++)
		{
			if (ascending[i] > ascending[k])
			{
				/* 위치 변경 */
				temp = ascending[k];
				ascending[k] = ascending[i];
				ascending[i] = temp;
			}
		}
	}

	for (i = 0; i < ARR_SIZE; i++)
	{
		printf("%d ", num[i]);
	}
	printf("에서 \n내림차순:");
	for (i = 0; i < ARR_SIZE; i++)
	{
		printf("%d ", descending[i]);
	}
	printf("\n오름차순:");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ascending[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}
