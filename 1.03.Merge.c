/*************************************************************************
	> File Name: 1.03.Merge.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Thu 27 Aug 2015 03:44:48 PM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>

int A[15] = {0, 1, 4, 5, 17, 28, 39, 10, 12, 15, 22, 23, 27, 32, 35};//for test,q is 6
int B[15] = {};

int main()
{
    int p, q, r; int s, t, k; 
    scanf("%d %d %d", &p, &q, &r); 
    s = p; t = q + 1; k = p;
    while(s <= q && t <= r)
    {
        if(A[s] <= A[t])
        {
            B[k] = A[s];
            s = s + 1;
        }
        else
        {
            B[k] = A[t];
            t = t + 1;
        }
        k = k + 1;
    }
    if(s == q + 1)
    {
        for(;t <= r;)
        {
            B[k] = A[t];
            k = k + 1; 
            t = t + 1;
        }
    }
    else 		
    {
        for(;s <= q;)
        {
            B[k] = A[s];
            k = k + 1;
            s = s + 1;
        }
    }
    for(;p <= r;)
    {
        A[p] = B[p];
        p = p + 1;
    }
    return 0;
}

