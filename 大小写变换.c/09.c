#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    for (; x != '\n';) {
        if (x >= 'A' && x <= 'Z') {
            x = x + ('a' - 'A');
        }
        else if (x >= 'a' && x <= 'z') {
            x = x - ('a' - 'A');
        }
        else {
            x = x;
        }
        printf("%c", x);
        scanf("%c", &x);
    }
    return 0;
}