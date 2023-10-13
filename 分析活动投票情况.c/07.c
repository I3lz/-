#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int main()
{
    int m[11] = { 0 };
    char x[10000];
    scanf("%s", &x);
    int n = strlen(x);
    for (int a = 0; a < n; a += 2) {
        if (x[a] == '6') {
            m[6]++;
        }
        else if (x[a] == '7') {
            m[7]++;
        }
        else if (x[a] == '8') {
            m[8]++;
        }
        else if (x[a] == '9') {
            m[9]++;
        }
        else if (x[a] == '1' || x[a] == '2' || x[a] == '3' || x[a] == '4' || x[a] == '5') {
            m[1]++;
        }
        else {
            m[10]++;
        }
    }
    int t = 0;
    for (int b = 6; b < 11; b++) {
        if (m[b] == 0) {
            t++;
        }
    }
    for (int b = 6; b < 11; b++) {
        if (m[b] == 0) {
            printf("%d", b);
            if (t > 1) {
                printf(" ");
                t--;
            }
        }
    }
    printf("\n");
    return 0;
}