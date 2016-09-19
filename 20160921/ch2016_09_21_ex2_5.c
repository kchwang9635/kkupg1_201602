/*
2016-09-21 실습 2-5
“2-5-out.txt” 파일에 원의 반지름을 입력 받아 둘레와 면적을 출력하시오
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
    //fp = fopen("2-5-out.txt", "w"); /* C 표준 */
    fopen_s(&fp, "2-5-out.txt", "w"); /* 마이크로 소프트 C 에서만 사용 */

    printf("원의 반지름을 입력하세요 : ");
    
    double r;
    scanf_s("%lf", &r); /* 마이크로 소프트 C 에서만 사용 */
    
    double cicum, area;
    // 둘레
    cicum = 2 * r * M_PI;
    // 면적
    area = pow(r,2) * M_PI;

    // 장치(파일 포인터) 조작 : 쓰기
    fprintf(fp, "반지름 %.2f 인 원 의 둘레는 %.2f m 이고, 면적은 %.2f m^2 입니다.\n", r, cicum, area);

    
    // 장치(파일 포인터) CLOSE
    fclose(fp);

    system("pause");
    return 0;
}