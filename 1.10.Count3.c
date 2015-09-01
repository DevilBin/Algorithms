/*************************************************************************
	> File Name: 1.10.Count3.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Sat 29 Aug 2015 05:29:37 PM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>

int main()
{
	int n, i, j, count;
	count = 0;
	scanf("%d", &n);
	for(i = 1; i <= n; ++i)
	{
		j = 2;
		while(j <= n)
		{
			j = j * j;
			count = count + 1;
		}
	}
	return count;
}
