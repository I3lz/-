#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int x, y;

	puts("��������������");
	printf("����x:"); scanf("%d", &x);
	printf("����y:"); scanf("%d", &y);
	printf("x��ֵ��y��%f%%", 100.0 * x / y);

	return 0;
}