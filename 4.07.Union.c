/*************************************************************************
	> File Name: 4.07.Union.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Tue 01 Sep 2015 06:02:40 PM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#define N 9

int P[10][2] = {{0}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}};
//P[][0] is parent node, p[][1] is rank

int Find(int x)
{
	int y, w, root;
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
	return root;
}

int main()
{
	int i, j, x, y, u, v;
	scanf("%d %d", &x, &y);
	u = Find(x); v = Find(y);
	if(P[u][1] <= P[v][1])
	{
		P[u][0] = v;
		if(P[u][1] == P[v][1])
		{
			P[v][1] = P[v][1] + 1;
		}
	}
	else 
		P[v][0] = u;
	for(i = 1; i <= N; ++i)
	{
		for(j = 0; j <= 1; ++j)
		{
			printf("%d ", P[i][j]);
		}
		printf("\n");
	}
	return 0;
}
