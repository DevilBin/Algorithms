/*************************************************************************
	> File Name: 1.06.BottomUpSort.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Fri 28 Aug 2015 03:32:59 PM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#define N 9

int A[10] = {0, 9, 4, 5, 2, 1, 7, 4, 6, 3};
int B[10] = {};
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

int main()
{
	int t, i, s;
	t = 1;
	while(t < N)
	{
		s = t;
		i = 0;
		t = 2 * s; 
		while(i + t <= N)
		{
			Merge(A, i + 1, i + s, i + t);
			i = i + t;
		}
		if(i + s < N)
			Merge(A, i + 1, i + s, N);
	}
	for(i = 1; i <= N; ++i)
	{
		printf("%d ", A[i]);
	}
	return 0;
}
