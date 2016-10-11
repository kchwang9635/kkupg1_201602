#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void extract_image(const char * filename , const char * savefile)
{
	int i;
	FILE * fp, *fpnew;
	char buff[255] ;
	char * line;
	const char * content_length_str = "Content-Length:"; // content-length
	int imgsize = -1;

	fopen_s(&fp, filename, "rb");
	if (fp == NULL)
	{
		printf("%s 파일 읽기 오류\n", filename);
		return;
	}
	// content-length 값과 줄바꿈 2회 (data start) 지점 찾기
	for (i = 0; i<20 - 3; i++)
	{
		line = fgets(buff, sizeof(buff), fp);
		if (line == NULL)
		{
			printf("파일 읽는중 오류 발생");
			return;
		}

		if (imgsize < 0)
		{
			if (strstr(line, content_length_str) != NULL)
			{
				// 1) content - length 값
				// "Content - Length: 71730" 에서 imagesize = 71730
				imgsize = atoi(line + strlen(content_length_str));
			}
		}
		else
		{
			// 2) 줄바꿈 2회 (data start) 지점 : 공백라인 후 실제 데이터 시작
			if (strcmp(line, "\n\n")==0 || strcmp(line, "\r\n") == 0)
			{
				break;
			}
		}
	}
	if (imgsize < 0)
	{
		printf("\"%s\" 부분을 찾지 못함\n", content_length_str);
		return;
	}

	// 이미지 부분만 저장
	fopen_s(&fpnew, savefile, "wb");
	for (i = 0; i<imgsize; i++)
	{
		// 1byte씩 읽어 쓰기
		fputc(fgetc(fp), fpnew);
	}

	fclose(fpnew);
	fclose(fp);
}