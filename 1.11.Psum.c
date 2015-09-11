/*************************************************************************
	> File Name: 1.11.Psum.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Sat 29 Aug 2015 05:56:21 PM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, i, j, k;
    int sum[100] = {};
    scanf("%d", &n);
    k = sqrt(n);
    for(j = 1; j <= k; ++j)
    {
        sum[j] = 0;
        for(i = 1; i <= j * j; ++i)
        {
            sum[j] = sum[j] + i;
        }
    }
    for(i = 1; i < k; ++i)
    {
        printf("%d ", sum[i]);
    }
    return 0;
}
