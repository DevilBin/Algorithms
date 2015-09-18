/*************************************************************************
	> File Name: 7.04.Knapsack.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Fri 18 Sep 2015 05:14:38 PM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#define N 4
#define C 9

int V[5][10] = {{0}};
int S[5] = {0, 2, 3, 4, 5};
int v[5] = {0, 3, 4, 5, 7};

int Max(int x, int y)
{
    if(x >= y)
        return x;
    else
        return y;
}

int Knapsack()
{
    int i, j;
    for(i = 0; i <= N; ++i)
        V[i][0] = 0;
    for(j = 0; j <= C; ++j)
        V[0][j] = 0;
    for(i = 1; i <= N; ++i)
    {
        for(j = 1; j <= C; ++j)
        {
            if(S[i] <= j)
            {
                V[i][j] = Max(V[i - 1][j], V[i - 1][j -S[i]] + v[i]);
            }
            else
                V[i][j] = V[i - 1][j];
        }
    }
    return V[N][C];
}

int main()
{
    int i, j;
    Knapsack();
    for(i = 0; i <= N; ++i)
    {
        for(j = 0; j <= C; ++j)
        {
            printf("%3d", V[i][j]);
        }
        printf("\n");
    }
    return 0;
}
