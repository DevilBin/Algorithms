/*************************************************************************
	> File Name: 7.02.MatrixCount.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Wed 16 Sep 2015 10:55:12 AM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>

int Matrix(int n)
{
    int k, sum;
    if(n == 1)
        return 1;
    else
    {
        sum = 0;
        for(k = 1; k <= n - 1; ++k)
        {
            sum = sum + Matrix(k) * Matrix(n - k);
        }
        return sum;
    }
}

int main()
{
    int i, n;
    scanf("%d", &n);
    for(i = 1; i <= n; ++i)
    {
        printf("%d ", Matrix(i));
    }
    return 0;
}
