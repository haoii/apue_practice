
#include <stdio.h>
#include <string.h>

#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

#define	FILE_MODE	(S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)

/**
 * 打开文件：
 * 1. 不存在则创建。
 * 2. 追加文件尾部。
 */

int main(void)
{
	int fd;

	char buf[] = "asdfghjkl";

	if ((fd = open("file1.txt", O_RDWR|O_CREAT|O_APPEND, FILE_MODE)) == -1)
		printf("打开文件错误\n");

	int len = strlen(buf);
	if (write(fd, buf, len) != len)
		printf("写入文件错误\n");

	return 0;
}