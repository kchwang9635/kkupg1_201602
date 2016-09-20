#include<stdio.h>
#include<Windows.h>
#include<string.h>

void use_fprintf()
{
    FILE * fp;

    fopen_s(&fp, "d:\\2-out.txt", "w");

    fprintf(fp, "hello world");

    fclose(fp);
}


void use_char_arr()
{
    FILE * fp;

    fopen_s(&fp, "d:\\2-out-use_char_arr.txt", "w");

    char str[] = "hello world - char arr";

    fprintf(fp, str);

    fclose(fp);
}


void use_fwrite()
{
    FILE * fp;

    fopen_s(&fp, "d:\\2-out-use_fwrite.txt", "w");

    char str[] = "hello world - fwrite";
    int length = strlen(str);

    fwrite(str , sizeof(char) , length , fp);

    fclose(fp);
}


int main(void)
{
    use_fprintf();
    use_char_arr();
    use_fwrite();

    system("pause");
    return 0;
}
