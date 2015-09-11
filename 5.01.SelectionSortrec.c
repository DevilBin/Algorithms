/*************************************************************************
	> File Name: 5.01.SelectionSortrec.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Tue 01 Sep 2015 07:54:39 PM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#define N 14

int n;
int A[15] = {0, 17, 28, 10, 4, 1, 22, 15, 27, 23, 5, 32, 12, 39, 35};

void SeleSort(int i)
{
    int j, k, temp;
    if(i < n)
    {
        k = i;
        for(j = i + 1; j <= n; ++j)
        {
            if(A[j] < A[k])
                k = j;
        }
        if(k != j)
        {
            temp = A[i];
            A[i] = A[k];
            A[k] = temp;
        }
        SeleSort(i + 1);
    }
}

int main()
{
    int i;
    n = N;
    SeleSort(1);
    for(i = 1; i <= n; ++i)
    {
        printf("%d ", A[i]);
    }
    return 0;
}
