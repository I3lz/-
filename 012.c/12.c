#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int a;
    double b;
    printf("�������������(cm)��"); scanf("%d", &a);
    b = (a - 100) * 0.9;
    printf("���ı�׼������%.1f���", b);
    double r, h, v;
    double �� = 3.1415926535897932384626;
    scanf("%lf %lf", &r, &h);
    v = �� * r * r * h / 3;
    printf("%.4f", v);
    return 0;
}