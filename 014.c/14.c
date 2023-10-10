#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    if (x >= 'A'&&x<='Z') {
        x = x + ('a' - 'A');
        printf("%c", x);
    }
    else {
        printf("Input Data error!");
    }
    return 0;
}