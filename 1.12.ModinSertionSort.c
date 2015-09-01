/*************************************************************************
	> File Name: 1.12.ModinSertionSort.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Sun 30 Aug 2015 06:05:33 PM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#define N 14
int A[15] = {0, 17, 28, 10, 4, 1, 22, 15, 27, 23, 5, 32, 12, 39, 35};

int ModbinS(int *A, int n, int x)
{
	int j, low, mid, high;
	low = 1; high = n; j = 0;
	while(low <= high && j == 0)
	{
		mid = (low + high) / 2;
		if(x == A[mid])
		{
			j = mid;
			return j;
		}
		else if(x < A[mid])
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return low;//Or return high(low == high)
}

int main()
{
	int i, j, k, x;
	for(i = 2; i <= N; ++i)
	{
		x = A[i];
		k = ModbinS(A, i - 1, x);
		for(j = i - 1; j >= k; --j)
		{
			A[j + 1] = A[j];

		}
		A[k] = x;
	}
	for(i = 1; i <= N; ++i)
	{
		printf("%d ", A[i]);
	}
	return 0;
}
