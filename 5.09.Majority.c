/*************************************************************************
	> File Name: 5.09.Majority.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Fri 11 Sep 2015 06:59:17 PM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#define N 7

int A[8] = {0, 1, 3, 2, 3, 3, 4, 3};

int Candidate(int m)
{
    int c, j, count;
    j = m; c = A[m]; count = 1;
    while(j < N && count > 0)
    {
        j = j + 1;
        if(A[j] == c)
        {
            count = count + 1;
        }
        else
        {
            count = count - 1;
        }
    }
    if(j == N)
        return c;
    else 
        return Candidate(j + 1);
}

int main()
{
    int c, j, count;
    c = Candidate(1);
    count = 0;
    for(j = 1; j <= N; ++j)
    {
        if(A[j] == c)
        {
            count = count + 1;
        }
    }
    if(count > (N / 2))
        printf("%d", c);
    else
        printf("none");
    return 0;
}
