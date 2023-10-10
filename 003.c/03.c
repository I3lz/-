#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int x, y;

	puts("请输入俩个整数");
	printf("整数x:"); scanf("%d", &x);
	printf("整数y:"); scanf("%d", &y);
	printf("x的值是y的%f%%", 100.0 * x / y);

	return 0;
}