#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int a;
    double b;
    printf("请输入您的身高(cm)："); scanf("%d", &a);
    b = (a - 100) * 0.9;
    printf("您的标准体重是%.1f公斤。", b);
    double r, h, v;
    double π = 3.1415926535897932384626;
    scanf("%lf %lf", &r, &h);
    v = π * r * r * h / 3;
    printf("%.4f", v);
    return 0;
}