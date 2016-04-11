/*************************************************************************
	> File Name: 1.05.InsertionSort.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Fri 28 Aug 2015 08:40:25 AM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#define N 14
int A[15] = {0, 17, 28, 10, 4, 1, 22, 15, 27, 23, 5, 32, 12, 39, 35};
 
int main()
{
    int i, j, x;
    for(i = 2;i <= N; ++i)
    {
        x = A[i];
        j = i - 1;
        while(j > 0 && A[j] > x)
        {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = x;
    }
    for(i = 1;i <= N; ++i)
    {
        printf("%d ", A[i]);
    }
    return 0;
}
