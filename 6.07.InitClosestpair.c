/*************************************************************************
	> File Name: 6.07.InitClosestpair.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Mon 14 Sep 2015 07:27:14 PM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#define N 8

int S[9][2] = {{0, 0}, {1, 2}, {0, 0}, {-3, -2}, {3, 4}, {2, 1}, {-2, 0}, {4, 2}, {-1, -1}};

void Swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int Split(int A[9][2], int low, int high, int xy)
{
    int i, j, x, w;
    i = low;
    x = A[low][xy];
    for(j = low + 1; j <= high; ++j)
    {      
        if(A[j][xy] <= x)
        {
            i = i + 1;
            if(i != j)
            {   
                Swap(&A[i][0], &A[j][0]);
                Swap(&A[i][1], &A[j][1]);
            }
        }   
    }
    Swap(&A[low][0], &A[i][0]);
    Swap(&A[low][1], &A[i][1]);
    w = i;
    return w;
}

void QuickSor(int A[9][2], int low, int high, int xy)
{
    int w;
    if(low < high)
    {
        w = Split(A, low, high, xy);
        QuickSor(A, low, w - 1, xy);
        QuickSor(A, w + 1, high, xy);
    }
}

int main()
{
    int i;
    QuickSor(S, 1, N, 1);
    for(i = 1; i <= N; ++i)
        printf("%d %d\n", S[i][0], S[i][1]);
    return 0;
}
