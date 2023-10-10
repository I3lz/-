#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int n;
	scanf("%d", &n);
	while (n > 0)
	{
		a++;
		n /=10;
	}; 
	printf("%d", a);
	return 0;
}