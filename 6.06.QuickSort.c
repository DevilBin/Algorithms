/*************************************************************************
	> File Name: 6.06.QuickSort.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Sun 13 Sep 2015 05:33:28 PM CST
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

void QuickSor(int *A, int low, int high)
{
    int w;
    if(low < high)
    {
        w = Split(A, low, high);
        QuickSor(A, low, w - 1);
        QuickSor(A, w + 1, high);
    }
}

int main()
{
    int i;
    QuickSor(A, 1, 8);
    for(i = 1; i <= N; ++i)
        printf("%d ", A[i]);
    return 0;
}
