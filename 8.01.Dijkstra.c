/*************************************************************************
	> File Name: 8.01.Dijkstra.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Sat 19 Sep 2015 05:36:57 PM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#include <limits.h>
#define N 6
#define M INT_MAX - 100

int L[7] = {0};
int X[7] = {1, 1, 0, 0, 0, 0, 0};//X[0] is sum of X
int Y[7] = {5, 2, 3, 4, 5, 6, 0};//Y[0] is sum of Y
int XY[7][7] = {{0, 0, 0, 0, 0, 0, 0}, 
                {0, M, 1,12, M, M, M},
                {0, M, M, 9, 3, M, M},
                {0, M, M, M, M, 5, M},
                {0, M, M, 4, M,13,15},
                {0, M, M, M, M, M, 4},
                {0, M, M, M, M, M, M}};

void Add(int *A, int x);
void Delete(int *A, int x);
void Dijkstra();

int main()
{
    int i;
    Dijkstra();
    for(i = 2; i <= N; ++i)
        printf("%d ", L[i]);
    return 0;
}
    
void Dijkstra()
{
    int i, j, m, Ym, min;
    for(i = 1; i <= N; ++i)
    {
        L[i] = XY[1][i];
    }
    for(j = 1; j <= N - 1; ++j)
    {
        min = L[Y[1]];
        for(i = 1; i <= Y[0]; ++i)
        {
            if(L[Y[i]] <= min)
            {
                min = L[Y[i]];
                m = i;
            }
        }
        Ym = Y[m];
        Add(X, Ym);
        Delete(Y, m);
        for(i = 1; i <= Y[0]; ++i)
        {
            if(XY[Ym][Y[i]] + L[Ym] < L[Y[i]])
                L[Y[i]] = XY[Ym][Y[i]] + L[Ym];
        }
    }
}

void Add(int *A, int x)
{
    A[A[0] + 1] = x;
    A[0] = A[0] + 1;
}

void Delete(int *A, int x)
{
    int i;
    for(i = x; i <= A[0] - 1; ++i)
    {
        A[i] = A[i + 1];
    }
    A[0] = A[0] - 1;
}
