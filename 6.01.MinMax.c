/*************************************************************************
	> File Name: 6.01.MinMax.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Sat 12 Sep 2015 08:54:44 AM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#define N 8

int x, y;
int A[9] = {0, 12, 45, 3, 69, 17, 2, 8, 20};

void Minmax(int low, int high)
{
    int mid;
    int a1, b1, a2, b2;
    if(high - low == 1)
    {
        if(A[low] < A[high])
        {
            x = A[low];
            y = A[high];
        }
        else
        {
            x = A[high];
            y = A[low];
        }
    }
    else
    {
        mid = (low + high) / 2;
        Minmax(low, mid);
        a1 = x; b1 = y;
        Minmax(mid + 1, high);
        a2 = x; b2 = y;
        x = (a1 < a2)? a1: a2;
        y = (b1 > b2)? b1: b2;
    }
}

int main()
{
    Minmax(1, N);
    printf("%d %d", x, y);
    return 0;
}
