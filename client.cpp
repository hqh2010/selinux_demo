#include <stdio.h>
#include <string.h>
#include <errno.h>

int main(int argc, char *argv[])
{
    FILE *fp = NULL;
    char buff[255];

    printf("开始读取/home/uos/test文件\n");
    fp = fopen("/home/uos/test", "r");
    if (fp)
    {
        fscanf(fp, "%[^\n]", buff);
        printf("读取结果为: %s\n", buff);
        fclose(fp);
    }
    else
    {
        printf("读取错误: %s\n", strerror(errno));
    }
    return 0;
}