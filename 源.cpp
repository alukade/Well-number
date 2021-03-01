#include<stdio.h>

#define STR(s) # s//预处理会把这个参数转换为一个字符串
int main(void)
{
	printf("%s\n", STR(FISHC));

	return 0;
}