#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a=5;
	printf("%d\n", a);
	printf("%d\n", a++);
	printf("%d\n", a);
	printf("%d\n",++ a);
	printf("%d\n", a);
	return 0;
}