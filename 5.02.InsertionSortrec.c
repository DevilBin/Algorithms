/*************************************************************************
	> File Name: 5.02.InsertionSortrec.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Wed 02 Sep 2015 04:27:03 PM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#define N 14

int n;
int A[15] = {0, 17, 28, 10, 4, 1, 22, 15, 27, 23, 5, 32, 12, 39, 35};

void InseSort(int i)
{
    int j, x;
    if(i > 1)
    {
        x = A[i];
        InseSort(i - 1);
        j = i - 1;
        while(j > 0 && A[j] > x)
        {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = x;
    }
}

int main()
{
    int i;
    n = N;
    InseSort(n);
    for(i = 1; i <= n; ++i)
    {
        printf("%d ", A[i]);
    }
    return 0;
}
