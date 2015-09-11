/*************************************************************************
	> File Name: 4.02.Delete.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Mon 31 Aug 2015 09:42:19 AM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#define N 10

int n;
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
            H[i / 2] = temp;
        }
        else
            done = 1;
        i = i / 2;
    }
}

void SiftDown(int *H, int i)
{
    int done, temp;
    done = 0;
    while(2 * i <= n && !done)
    {
        i = 2 * i;
        if(i + 1 <= n && H[i + 1] > H[i])
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
}

int main()
{
    int i, j, x, y;
    n = N;
    scanf("%d", &i);
    x = H[i]; y = H[n];
    n = n - 1;
    if(i == n + 1)
    {
        for(j = 1; j <= n; ++j)
            printf("%d ", H[j]);
    }
    else
    {
        H[i] = y;
        if(y >= x)
            SiftUp(H, i);
        else
            SiftDown(H, i);
        for(j = 1; j <= n; ++j)
            printf("%d ", H[j]);
    }
    return 0;
}



