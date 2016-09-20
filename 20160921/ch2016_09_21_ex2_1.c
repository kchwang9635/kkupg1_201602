/*
2016-09-21 실습 2-1
“2-1-out.txt” 파일에 학번, 이름을 출력하는 프로그램을 작성하시오.
*/

#include <stdio.h>
#include <Windows.h>
int main()
{
    // 장치 선언. (File Pointer)
    FILE * fp;

    // 장치(파일 포인터) OPEN
    //fp = fopen("d:\\2-1-out.txt", "w"); /* C 표준 */
    fopen_s(&fp, "d:\\2-1-out.txt", "w"); /* 마이크로 소프트 C 에서만 사용 */

    // 장치(파일 포인터) 조작 : 쓰기
    fprintf(fp, "학번:201609070900\n");
    fprintf(fp, "이름:홍길동\n");

    // 장치(파일 포인터) CLOSE
    fclose(fp);

    system("pause");
    return 0;
}
