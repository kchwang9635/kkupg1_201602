/*
2016-09-21 실습 2-7
“2-7-out.txt” 파일에 원의 반지름을 “d:\\2-7-in.txt”에서 읽어, 둘레와 면적을 출력하시오
*/

#include <stdio.h>
#include <Windows.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
    //*******************************************
    //***************** 읽기 ********************
    //*******************************************
    // 장치 선언. (File Pointer)
    FILE * fp_in;

    // 장치(파일 포인터) OPEN
    fopen_s(&fp_in, "d:\\2-7-in.txt", "r");

    // 읽을 파일이 이상이 없는지 확인
    if (fp_in == 0)
    {
        printf("파일이 없습니다\n");
        system("pause");
        return 1;
    }

    double r;
    // 장치(파일 포인터) 조작 :  읽기
    fscanf_s(fp_in, "%lf", &r);
    // 장치(파일 포인터) CLOSE
    fclose(fp_in);

    //*******************************************
    //***************** 쓰기 ********************
    //*******************************************
    // 장치 선언. (File Pointer)
    FILE * fp;
    // 장치(파일 포인터) OPEN
    fopen_s(&fp, "d:\\2-7-out.txt", "w");

    double cicum, area;
    // 둘레
    cicum = 2 * r * M_PI;
    // 면적
    area = pow(r, 2) * M_PI;

    // 장치(파일 포인터) 조작 : 쓰기
    fprintf(fp, "반지름 %.2f 인 원 의 둘레는 %.2f m 이고, 면적은 %.2f m^2 입니다.\n", r, cicum, area);

    // 장치(파일 포인터) CLOSE
    fclose(fp);

    system("pause");
    return 0;
}
