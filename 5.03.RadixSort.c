/*************************************************************************
	> File Name: 5.03.RadixSort.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Thu 03 Sep 2015 05:34:05 PM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#define K 4
#define N 8

int H[9][10] = {};
int L[9] = {0, 7467, 1247, 3275, 6792, 9187, 9134, 4675, 1239};

void Init(int H[9][10])
{
    int i, j;
    for(i = 1; i <= N; ++i)
        for(j = 0; j <= 9; ++j)
        {
            H[i][j] = 0;
        }
}

int SplitNumber(int x, int j)
{
    int i, temp;
    temp = (int)pow(10, j - 1);
    i = (x / temp) % 10;
    return i;
}

int main()
{
    int a, i, j, m, x, y;
    for(j = 1; j <= K; ++j)
    {
        m = 1;  
        Init(H);
        while(m <= 8)
        {
            a = L[m];
            i = SplitNumber(a, j);
            H[m][i] = a;
            m++;
        }
        m = 1;
        for(y = 0; y <= 9; ++y)
        {
            for(x = 1; x <= N; ++x)
            {
                if(H[x][y] != 0)
                {
                    L[m] = H[x][y];
                    m++;
                }
            }
        }
    }
    for(i = 1; i <= N; ++i)
        printf("%d ", L[i]);
    return 0;
}

