/*
2016-09-21 실습 2-8
“d:\\2-8-in.txt”파일에서 삼각형의 밑변과 높이를 읽고, 넓이를 “2-8-out.txt” 파일에 출력하시오
*/

#include <stdio.h>
#include <Windows.h>

int main()
{
    //*******************************************
    //***************** 읽기 ********************
    //*******************************************
    // 장치 선언. (File Pointer)
    FILE * fp_in;

    // 장치(파일 포인터) OPEN
    fopen_s(&fp_in, "d:\\2-8-in.txt", "r");

    // 읽을 파일이 이상이 없는지 확인
    if (fp_in == 0)
    {
        printf("파일이 없습니다\n");
        system("pause");
        return 1;
    }

    double width, height;
    // 장치(파일 포인터) 조작 :  읽기
    fscanf_s(fp_in, "%lf\n%lf", &width, &height);
    // 장치(파일 포인터) CLOSE
    fclose(fp_in);

    //*******************************************
    //***************** 쓰기 ********************
    //*******************************************
    // 장치 선언. (File Pointer)
    FILE * fp;
    // 장치(파일 포인터) OPEN
    fopen_s(&fp, "d:\\2-8-out.txt", "w");

    double area;
    // 면적
    area = width * height / 2;

    // 장치(파일 포인터) 조작 : 쓰기
    fprintf(fp, "밑변이 %.2f 이고 높이 %.2f 인 삼각형의 넓이는 %.2f 입니다.\n", width, height, area);

    // 장치(파일 포인터) CLOSE
    fclose(fp);

    system("pause");
    return 0;
}
