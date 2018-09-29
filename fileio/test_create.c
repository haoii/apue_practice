
#include <stdio.h>

#include <fcntl.h>
#include <sys/stat.h>

#define	FILE_MODE	(S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)


/**
 * 创建文件：
 * 1. 创建前进行测试，若文件存在则返回-1。
 * 2. 注意oflag参数、mode参数。
 */

int main(void)
{
	int fd;

	printf("Create a file ... \n");

	fd = open("file1.txt", O_RDWR|O_CREAT|O_EXCL, FILE_MODE);

	printf("fd: %d\n", fd);

	return 0;
}