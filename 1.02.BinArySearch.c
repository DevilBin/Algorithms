/*************************************************************************
	> File Name: 1.02.BinArySearch.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Thu 27 Aug 2015 03:29:22 PM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>

int A[15] = {0, 1, 4, 5, 7, 8, 9, 10, 12, 15, 22, 23, 27, 32, 35};

int main()
{
	int x; int j;
	int low, mid, high;
	low = 1; high = 14; j = 0;
	scanf("%d", &x);
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
	return j;
}
