#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int vx, vy;

	puts("请输入俩个整数。");
	printf("整数vx:"); scanf("%d",&vx);
	printf("整数vy:"); scanf("%d",&vy);

	printf("vx/vy=%d\n", vx / vy);
	printf("vx%%vy=%d", vx % vy);
}