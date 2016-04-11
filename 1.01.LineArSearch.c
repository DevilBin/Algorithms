/*************************************************************************
	> File Name: 1.01.LinearSearch.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Wed 26 Aug 2015 08:46:12 PM CST
 ************************************************************************/

#include <stdio.h>

int A[15] = {0, 1, 4, 5, 7, 8, 9, 10, 12, 15, 22, 23, 27, 32, 35};

int main()
{
    int x; int j = 1;
    scanf("%d", &x);
    while(j < 15 && x != A[j])
    {
        j = j + 1;
    }
    if(x == A[j])
        return j;
    else
        return 0;
}
