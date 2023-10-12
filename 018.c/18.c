#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
    int x = 2, n, m, z = 0;
    scanf("%d %d", &n, &m);
    int a[n];
    for (int c = 0; c < n; c++) {
        scanf("%d", &a[c]);
    }
    for (int d = 0; d < m; d++) {
        for (int f = 0; f < n; f++) {
            a[f] = a[f] - x;
            if (a[f] == 0) {
                x++;
            }
        }
        z = z + x;
    }
    printf("%d", z);
    return 0;
}