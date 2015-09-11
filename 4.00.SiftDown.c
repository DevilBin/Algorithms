/*************************************************************************
	> File Name: 4.00.SiftDown.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Mon 31 Aug 2015 08:39:53 AM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#define N 10

int H[11] = {0, 20, 3, 9, 10, 11, 4, 5, 3, 7, 5};//for test i is 2

int main()
{
    int i, done, temp;
    done = 0;
    scanf("%d", &i);
    while(2 * i <= N && !done)
    {
        i = 2 * i;
        if(i + 1 <= N && H[i + 1] > H[i])
            i = i + 1;
        if(H[i] > H[i / 2])
        {
            temp = H[i];
            H[i] = H[i / 2];
            H[i / 2] = temp;
        }
        else
            done = 1;
    }
    for(i = 1; i <= N; ++i)
    {
        printf("%d ", H[i]);
    }
    return 0;
}
