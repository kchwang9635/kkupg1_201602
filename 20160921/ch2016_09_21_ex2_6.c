/*
2016-09-21 실습 2-6
삼각형의 밑변과 높이를 입력 받아 넓이를 “2-6-out.txt” 파일에 출력하시오
*/

#include <stdio.h>
#include <Windows.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
    // 장치 선언. (File Pointer)
    FILE * fp;

    // 장치(파일 포인터) OPEN
    //fp = fopen("d:\\2-6-out.txt", "w"); /* C 표준 */
    fopen_s(&fp, "d:\\2-6-out.txt", "w"); /* 마이크로 소프트 C 에서만 사용 */

    double width, height, area;
    printf("삼각형의 밑변 길이를 입력하세요: ");
    scanf_s("%lf", &width);
    printf("삼각형의 높이를 입력하세요 : ");
    scanf_s("%lf", &height);

    area = width * height / 2;

    // 장치(파일 포인터) 조작 : 쓰기
    fprintf(fp, "밑변이 %.2f 이고 높이 %.2f 인 삼각형의 넓이는 %.2f 입니다.\n", width, height, area);

    // 장치(파일 포인터) CLOSE
    fclose(fp);

    system("pause");
    return 0;
}
