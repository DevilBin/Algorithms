/*************************************************************************
	> File Name: 5.07.Permutations1.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Thu 10 Sep 2015 21:39:11 PM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>

int n;
int P[100] = {};

void Perm1(int m)
{	
	int i, j; int temp;
	if(m == n)
	{
		for(i = 1; i <= n; ++i)
		{
			printf("%d ", P[i]);
		}
		printf("\n");
	}
	else
	{
		for(j = m; j <= n; ++j)
		{
			temp = P[j];
			P[j] = P[m];
			P[m] = temp;
			Perm1(m + 1);
			temp = P[j];
			P[j] = P[m];
			P[m] = temp;
		}
	}
}

int main()
{
	int j;
	scanf("%d", &n);
	for(j = 1; j <= n; ++j)
	{
		P[j] = j;
	}
	Perm1(1);
	return 0;
}
