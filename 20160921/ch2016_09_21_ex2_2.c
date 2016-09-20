/*
2016-09-21 실습 2-2
“2-2-out.txt” 파일에 밑변 213mm 높이 41mm 인 삼각형의 넓이를 저장하시오.
*/

#include <stdio.h>
#include <Windows.h>
int main()
{
    // 장치 선언. (File Pointer)
    FILE * fp;

    // 장치(파일 포인터) OPEN
    //fp = fopen("d:\\2-2-out.txt", "w"); /* C 표준 */
    fopen_s(&fp, "d:\\2-2-out.txt", "w"); /* 마이크로 소프트 C 에서만 사용 */

    double height, width, area;
    height = 213.0;
    width = 41.0;

    area = height * width / 2.0;

    // 장치(파일 포인터) 조작 : 쓰기
    fprintf(fp, "밑변이 %.2f mm 이고 높이가 %.2f mm인 삼각형의 넓이는 %.2f mm^2 입니다.\n", height, width, area);

    // 장치(파일 포인터) CLOSE
    fclose(fp);

    system("pause");
    return 0;
}
