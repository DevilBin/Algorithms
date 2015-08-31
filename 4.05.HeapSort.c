/*************************************************************************
	> File Name: 4.05.HeapSort.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Mon 31 Aug 2015 01:47:14 PM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#define N 10

int n;
int H[11] = {0, 4, 3, 8, 10, 11, 13, 7, 30, 17, 26};

void SiftDown(int *H, int i)
{
	int done, temp;
	done = 0;
	while(2 * i <= n && !done)
	{
		i = 2 * i;
		if(i + 1 <= n && H[i + 1] > H[i])
			i = i + 1;
		if(H[i] > H[i / 2])
		{
			temp = H[i];
			H[i] = H[i / 2];
			H[i / 2] = temp;
		}
		else
			done = 1;
	}
}

void MakeHeap(int *H)
{
	int i; 
	n = N;
	for(i = n / 2; i >= 1; i --)
	{
		SiftDown(H, i);
	}
}

int main()
{
	int j, temp;
	MakeHeap(H);
	for(j = N; j >= 2; j--)
	{
		temp = H[1];
		H[1] = H[j];
		H[j] = temp;
		n = n -1;
		SiftDown(H, 1);
	}
	for(j = 1; j <= N; j ++)
	{
		printf("%d ", H[j]);
	}
	return 0;
}

