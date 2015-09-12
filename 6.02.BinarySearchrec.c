/*************************************************************************
	> File Name: 6.02.BinarySearchrec.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Sat 12 Sep 2015 11:48:59 AM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#define N 8

int x;
int A[9] = {0, 3, 7, 9, 11, 14, 23, 36, 49};

int Binse(int low, int high)
{
    int mid;
    if(low > high)
        return 0;
    else
    {
        mid = (low + high) / 2;
        if(x == A[mid])
            return mid;
        else if(x < A[mid])
            return Binse(low, mid - 1);
        else
            return Binse(mid + 1, high);
    }
}

int main()
{
    scanf("%d", &x);
    if(Binse(1, N))
        printf("%d is %dth in the list.", x, Binse(1, N));
    else
        printf("%d is not in the list.", x);
    return 0;
}
