/*************************************************************************
	> File Name: 6.04.Select.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Sat 12 Sep 2015 09:13:21 PM CST
 ************************************************************************/
#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#define N 25

int A[26] = {0, 8, 33, 17, 51, 57, 49, 35, 11, 25, 37, 14, 3, 2, 13, 52, 12, 6, 29, 32, 54, 5, 16, 22, 23, 7};
int B[26] = {0};
int M[100] = {0};

int Merge(int *A, int p, int q, int r)
{
    int s, t, k;
    s = p; t = q + 1; k = p;
    while(s <= q && t <=r)
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

int Mersort(int *A, int low, int high)
{
    int mid;
    if(low < high)
    {
        mid = (low + high) / 2;
        Mersort(A, low, mid);
        Mersort(A, mid + 1, high);
        Merge(A, low, mid, high);
    }
    return 0;
}

int Select(int *A, int low, int high, int k)
{
    int i, j, p, q, mm;
    int str[N], A1[N], A3[N]; 
    int a1, a2, a3;
    a1 = a2 = a3 =0;
    p = high - low + 1;
    for(i = low; i <= high; ++i)
        str[i] = A[i];
    if(p < 6)//6 is only for test. In fact, p < 44.
    {
        Mersort(A, low, high);
        return A[k];
    }
    else
    {
        j = 1; q = p / 5;
        for(i = 1; i <= q; ++i)
        {
            Mersort(A, 1 + (i - 1) * 5, 5 + (i - 1) * 5);
            M[j] = A[3 + (i - 1) * 5];
            j++;
        }
        mm = Select(M, 1, q, (int)ceil(q / 2.0));
        for(i = low; i <= high; ++i)
        {
            if(str[i] < mm)
            {
                a1++;
                A1[a1] = str[i];
            }
            else if(str[i] == mm)
            {
                a2++;
            }
            else
            {
                a3++;
                A3[a3] = str[i];
            }
        }
        if(a1 >= k)
            return Select(A1, 1, a1, k);
        else if(a1 + a2 >= k)
            return mm;
        else
            return Select(A3, 1, a3, k - a1 - a2);
    }
}

int main()
{
    int k;
    scanf("%d", &k);
    printf("%d", Select(A, 1, N, k));
    return 0;
}
