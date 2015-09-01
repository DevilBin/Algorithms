/*************************************************************************
	> File Name: 1.08.Count1.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Sat 29 Aug 2015 11:59:31 AM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>

int main()
{
	int n, j, count;
	count = 0;
	scanf("%d", &n);
	while(n >= 1)
	{
		for(j = 1; j <= n; ++j)
		{
			count = count + 1;
		}
		n = n / 2;
	}
	return count;
}
