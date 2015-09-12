/*************************************************************************
	> File Name: 6.03.MergeSort.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Sat 12 Sep 2015 12:07:44 PM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#define N 9

int A[10] = {0, 9, 4, 5, 2, 1, 7, 4, 6, 3};
int B[10] = {0};

int Merge(int *A, int p, int q, int r)
{
    int s, t, k;
    s = p; t = q + 1; k = p;
    while(s <= q && t <=r)
    {
        if(A[s] <= A[t])
        {
            B[k] = A[s];
            s = s + 1;
        }
        else
        {
            B[k] = A[t];
            t = t + 1;
        }
        k = k + 1;
    }
    if(s == q + 1)
    {
        for(;t <= r;)
        {
            B[k] = A[t];
            k = k + 1;
            t = t + 1;
        }
    }
    else
    {
        for(;s <= q;)
        {
            B[k] = A[s];
            k = k + 1;
            s = s + 1;
        }
    }
    for(;p <= r;)
    {
        A[p] = B[p];
        p = p + 1;
    }
	return 0;
}

int Mersort(int *A, int low, int high)
{
    int mid;
    if(low < high)
    {
        mid = (low + high) / 2;
        Mersort(A, low, mid);
        Mersort(A, mid + 1, high);
        Merge(A, low, mid, high);
    }
    return 0;
}

int main()
{
    int i;
    Mersort(A, 1, N);
    for(i = 1; i <= N; ++i)
        printf("%d ", A[i]);
    return 0;
}
