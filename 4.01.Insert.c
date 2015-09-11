/*************************************************************************
	> File Name: 4.01.Insert.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Mon 31 Aug 2015 09:22:46 AM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#define N 10

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
            H[i / 2 ] = temp;
        }
        else
            done = 1;
        i = i / 2;
    }
}

int main()
{
    int i, x, n;
    scanf("%d", &x);
    n = N + 1;
    H[n] = x;
    SiftUp(H , n);
    for(i = 1; i <= n; ++i)
    {
        printf("%d ", H[i]);
    }
    return 0;
}
			
