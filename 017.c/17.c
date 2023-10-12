#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
int main()
{
    int m = 0;
    char x[100000];
    scanf("%s", &x);
    int n = strlen(x);
    for (int a = 0; a < n + 4; a++) {
        if (x[a] == 'l') {
            if (x[a + 1] == 'o') {
                if (x[a + 2] == 'v') {
                    m++;
                    break;
                }
            }
        }
        if (x[a] == 'l') {
            if (x[a + 1] == 'o') {
                if (x[a + 2] == 'e') {
                    m++;
                    break;
                }
            }
        }
        if (x[a] == 'l') {
            if (x[a + 1] == 'v') {
                if (x[a + 2] == 'e') {
                    m++;
                    break;
                }
            }
        }
        if (x[a] == 'o') {
            if (x[a + 1] == 'v') {
                if (x[a + 2] == 'e') {
                    m++;
                    break;
                }
            }
        }
        if (x[a] == 'l') {
            if (x[a + 1] == 'o') {
                if (x[a + 2] == 'v') {
                    if (x[a + 3] == 'e') {
                        m++;
                        break;
                    }
                }
            }
        }
    }
    if (m == 1) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}