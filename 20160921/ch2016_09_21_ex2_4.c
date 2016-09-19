/*
2016-09-21 실습 2-4
구구단 6단을 “2-4-out.txt” 파일에 출력하시오.
*/

#include <stdio.h>
#include <Windows.h>

int main()
{
    // 장치 선언. (File Pointer)
    FILE * fp;

    // 장치(파일 포인터) OPEN
    //fp = fopen("2-4-out.txt", "w"); /* C 표준 */
    fopen_s(&fp, "2-4-out.txt", "w"); /* 마이크로 소프트 C 에서만 사용 */

    int dan;
    dan = 6;

    // 장치(파일 포인터) 조작 : 쓰기
    fprintf(fp, "구구단 %d단\n", dan);

    int i;
    for (i = 1; i < 10; i++)
    {
        // 장치(파일 포인터) 조작 : 쓰기
        fprintf(fp, "%d * %d = %d\n", dan, i, dan * i);
    }

    // 장치(파일 포인터) CLOSE
    fclose(fp);

    system("pause");
    return 0;
}