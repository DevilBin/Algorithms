/*************************************************************************
	> File Name: 7.01.Lcs.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Tue 15 Sep 2015 08:13:41 PM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#define N 10 
#define M 12

char A[11] = "0xyxxzxyzxy";
char B[13] = "0zxzyyzxxyxxz";
int L[11][13] = {{0}};

int main()
{
    int i, j;
    for(i = 1; i <= N; ++i)
        L[i][0] = 0;
    for(j = 1; j <= M; ++j)
        L[0][j] = 0;
    for(i = 1; i <= N; ++i)
    {
        for(j = 1; j <= M; ++j)
        {
            if(A[i] == B[j])
                L[i][j] = L[i - 1][j - 1] + 1;
            else
                L[i][j] = (L[i][j - 1] > L[i - 1][j])? L[i][j - 1]: L[i - 1][j];
        }
    }
    for(i = 0; i <= N; ++i)
    {
        for(j = 0; j <= M; ++j)
        {
            printf("%d ", L[i][j]);
        }
        printf("\n");
    }
    printf("The longest common sequence is %d.", L[N][M]);
    return 0;
}
