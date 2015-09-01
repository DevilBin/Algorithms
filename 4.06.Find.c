/*************************************************************************
	> File Name: 4.06.Find.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Tue 01 Sep 2015 04:02:06 PM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#define N 4

int P[5] = {0, 0, 1, 2, 3};

int main()
{
	int i, x, y, w, root;
	scanf("%d", &x);
	y = x;
	while(P[y] != 0)
	{
		y = P[y];
	}
	root = y; y = x;
	while(P[y] != 0)
	{
		w = P[y];
		P[y] = root;
		y = w;
	}
	for(i = 1; i <= N; ++i)
	{
		printf("%d ", P[i]);
	}
	return root;
}
