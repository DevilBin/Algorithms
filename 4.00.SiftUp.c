/*************************************************************************
	> File Name: 4.00.SiftUp.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Mon 31 Aug 2015 08:18:50 AM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#define N 10

int H[11] = {0, 20, 17, 9, 10, 11, 4, 5, 3, 7, 25};//for test i is 10

int main()
{
	int i, done, temp;
	done = 0;
	scanf("%d", &i);
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
	for(i = 1; i <= N; ++i)
	{
		printf("%d ", H[i]);
	}
	return 0;
}
