/*************************************************************************
	> File Name: 5.04.Exprec.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Tue 08 Sep 2015 10:59:46 AM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>

int Power(int x, int m)
{
	int y;
	if(m == 0)
		y = 1;
	else
	{
		y = Power(x, m / 2);
		y = y * y;
		if(m % 2 == 1)
		{
			y = x * y;
		}
	}
	return y;
}
int main()
{
	int x, n;
	scanf("%d %d", &x, &n);
	printf("%d", Power(x, n));
	return 0;
}
