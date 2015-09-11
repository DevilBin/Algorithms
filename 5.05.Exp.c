/*************************************************************************
	> File Name: 5.05.Exp.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Tue 08 Sep 2015 11:34:42 AM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>

int str[100] = {};

int Expand(int n)
{
    int i = 0;
    while(n != 0)
    {
        if(n % 2 == 0)
            str[i] = 0;
        else
            str[i] = 1;
        n = n / 2;
        i++;
    }
    return i;
}

int Exp(int x, int n)
{
    int j, y;
    y = 1;
    j = Expand(n);
    for(; j >= 0; --j)
    {
        y = y * y;
        if(str[j] == 1)     
            y = x * y;
    }
    return y;
}

int main()
{
    int x, n;
    scanf("%d %d", &x, &n);
    printf("%d", Exp(x, n));
    return 0;
}
