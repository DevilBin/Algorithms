/*************************************************************************
	> File Name: 6.05.Split.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Sun 13 Sep 2015 05:18:16 PM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#define N 8

int A[9] = {0, 5, 7, 1, 6, 4, 8, 3, 2};

int Split(int *A, int low, int high)
{
    int i, j, x, w, temp;
    i = low;
    x = A[low];
    for(j = low + 1; j <= high; ++j)
    {
        if(A[j] <= x)
        {
            i = i + 1;
            if(i != j)
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    temp = A[low];
    A[low] = A[i];
    A[i] = temp;
    w = i;
    return w;
}

int main()
{
    int i;
    printf("%d\n", Split(A, 1, 8));
    for(i = 1; i <= N; ++i)
        printf("%d ", A[i]);
    return 0;
}
