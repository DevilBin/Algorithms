/*************************************************************************
	> File Name: 4.04.MakeHeap.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Mon 31 Aug 2015 01:22:32 PM CST
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

int main()
{
	int i;
	n = N;
	for(i = n / 2; i >= 1; --i)
	{
		SiftDown(H, i);
	}
	for(i = 1; i <= N; ++i)
	{
		printf("%d ", H[i]);
	}
	return 0;
}
