/*************************************************************************
	> File Name: 7.03.Floyd.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Thu 17 Sep 2015 10:37:34 AM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#include <limits.h>
#define N 3

int D[4][4] = {{0, 0, 0, 0}, {0, 0, 2, 9}, {0, 8, 0 , 6}, {0, 1, INT_MAX, 0}};

int min(int x, int y)
{
    if(x <= y)
        return x;
    else
        return y;
}

int main()
{
    int i, j, k;
    for(k = 1; k <= N; ++k)
    {
        for(i = 1; i <= N; ++i)
        {
            for(j = 1; j <= N; ++j)
            {
                D[i][j] = min(D[i][j], D[i][k] + D[k][j]);
            }
        }
        printf("D%d:\n", k);
        for(i = 1; i <= N; ++i)
        {   
            printf("\t");
            for(j = 1; j <= N; ++j)
            {
                printf("%d ", D[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
