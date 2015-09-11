/*************************************************************************
	> File Name: 5.06.Horner.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Tue 08 Sep 2015 09:25:57 PM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#define N 5

int str[6] = {0, 4, 3, 5, 6, 1};
//y = 4x^4 + 3x^3 + 5x^2 + 6x + 1

int main()
{
    int p, j, x;
    scanf("%d", &x);
    p = str[1];
    for(j = 1; j <= N - 1; ++j)
    {
        p = x * p + str[j + 1];
    }
    printf("%d", p);
    return 0;
}

