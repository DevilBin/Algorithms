/*************************************************************************
	> File Name: 7.02.Matchain.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Wed 16 Sep 2015 01:50:24 PM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#include <limits.h>
#define N 5

int R[12] = {0, 5, 10, 4, 6, 10, 2};
int C[6][6] = {{0}};

int min(int x, int y)
{
    if(x <= y)
        return x;
    else
        return y;
}

int Match()
{
    int i, j, k, d;
    for(i = 1; i <= N; ++i)
    {
        C[i][i] = 0;
    }
    for(d = 1; d <= N - 1; ++d)
    {
        for(i = 1; i <= N - d; ++i)
        {
            j = i + d;
            C[i][j] = INT_MAX;
            for(k = i + 1; k <= j; ++k)
            {
                C[i][j] = min(C[i][j], C[i][k - 1] + C[k][j] + R[i] * R[k] * R[j + 1]);
            }
        }
    }
    return C[1][N];
}

int main()
{
    printf("%d", Match());
    return 0;
}
    
