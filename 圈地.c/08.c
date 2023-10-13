#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
    int t, n, d[10000];
    long long l = 0;
    double s;
    double PI = acos(-1.0);
    scanf("%d", &t);
    for (int a = 0; a < t; a++) {
        scanf("%d", &n);
        for (int b = 0; b < n; b++) {
            scanf("%d", &d[b]);
            l = l + d[b];
        }
        s = (l * l) / (4 * PI);
        printf("%.3lf\n", s);
        l = 0;
    }
    return 0;
}