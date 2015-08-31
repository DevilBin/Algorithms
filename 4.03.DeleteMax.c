/*************************************************************************
	> File Name: 4.03.DeleteMax.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Mon 31 Aug 2015 11:32:05 AM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#define N 10

int n;
int H[11] = {0, 20, 17, 9, 10, 11, 4, 5, 3, 7, 5};

void SiftUp(int *H, int i)
{
	int done, temp;
	done = 0;
	while(i != 1 && !done)
	{
		if(H[i] > H[i / 2])
		{
			temp = H[i];
			H[i] = H[i / 2];
			H[i / 2] = temp;
		}
		else
			done = 1;
		i = i / 2;
	}
}

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

void Delete(int *H, int i)
{
	int x, y;
	n = N;
	x = H[i]; y = H[n];
	n = n - 1;
	if(i != n + 1)
	{
		H[i] = y;
		if(y >= x)
			SiftUp(H, i);
		else
			SiftDown(H, i);
	}
}

int main()
{
	int i, x;
	x = H[1];
	Delete(H, 1);
	for(i = 1; i <= n; i ++)
	{
		printf("%d ", H[i]);
	}
	return x;
}
