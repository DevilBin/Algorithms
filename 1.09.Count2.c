/*************************************************************************
	> File Name: 1.09.Count2.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Sat 29 Aug 2015 05:22:54 PM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>

int main()
{
    int n, m, i, j, count;
    count = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; ++i)
    {
        m = n / i;
        for(j = 1; j <= m; ++j)
        {
            count = count + 1;
        }
    }
    return count;
}
