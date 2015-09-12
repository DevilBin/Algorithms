/*************************************************************************
	> File Name: 5.08.Permutations2.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Fri 11 Sep 2015 13:24:42 PM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>

int n;
int P[100] = {0};
void Perm2(int m)
{
    int i, j; 
    if(m == 0)
    {
        for(i = 1; i <= n; ++i)
        {
            printf("%d ", P[i]);
        }
        printf("\n");
    }
    else
    {   
        for(j = 1; j <= n; ++j)
        {
            if(P[j] == 0)
            {
                P[j] = m;
                Perm2(m - 1);
                P[j] = 0;
            }
        }
    }
}

int main()
{
    int j;
    scanf("%d", &n);
    for(j = 1; j <= n; ++j)
    {
        P[j] = 0;
    }
    Perm2(n);
    return 0;
}
