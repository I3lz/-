#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
    double x, y, n;
    scanf("%lf", &x);
    if (x > 6) {
        y = 5 * (x * x + 4 * x - 6) / 27;
    }
    else if (0 < x <= 6) {
        y = log(16) / log(3) + x;
    }
    else if (x <= 0) {
        if (x * x * x <= -4) {
            n = -(x * x * x + 4);
            y = 23.0 * n / 7;
        }
        else {
            y = 23.0 * (x * x * x + 4) / 7;
        }
    }
    printf("%.3f", y);
    return 0;
}