/*************************************************************************
	> File Name: 1.07.BruteForcePrimalitytest.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Sat 29 Aug 2015 10:59:32 AM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

int judge(int n)
{
	int j, s;
	s = sqrt(n);
	for(j = 2; j < s; j++)
	{
		if(n % j == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int n;
	scanf("%d", &n);
	if(judge(n))
		printf("Input is a prime number.");
	else
		printf("Input isn't a prime number.");
	return 0;
}
