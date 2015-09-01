/*************************************************************************
	> File Name: 4.06.Find.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Tue 01 Sep 2015 04:02:06 PM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#define N 4

int P[5][2] = {{0}, {0, 1}, {1, 1}, {2, 1}, {3, 1}};
//P[][0] is parent node, p[][1] is rank

int main()
{
	int i, x, y, w, root;
	scanf("%d", &x);
	y = x;
	while(P[y][0] != 0)
	{
		y = P[y][0];
	}
	root = y; y = x;
	while(P[y][0] != 0)
	{
		w = P[y][0];
		P[y][0] = root;
		y = w;
	}
	for(i = 1; i <= N; ++i)
	{
		printf("%d ", P[i][0]);
	}
	return root;
}
