/*************************************************************************
	> File Name: 1.04.SelectionSort.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Fri 28 Aug 2015 07:15:58 AM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#define N 14
int A[15] = {0, 17, 28, 10, 4, 1, 22, 15, 27, 23, 5, 32, 12, 39, 35};

int main()
{
	int i, j, k; int temp;
	for(i = 1;i < N;i ++)
	{
		k = i;
		for(j = i + 1;j <= N;j ++)
		{
			if(A[j] < A[k])
			{
				k = j;
			}
		}
		if(k != i)
		{
			temp = A[i];
			A[i] = A[k];
			A[k] = temp;
		}
	}
	for(i = 1;i <= N;i ++)
	{
		printf("%d ", A[i]);
	}
	return 0;
}
