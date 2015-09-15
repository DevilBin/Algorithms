/*************************************************************************
	> File Name: 6.07.Closestpair.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Mon 14 Sep 2015 09:17:10 PM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#define N 8

int S[9][2] = {{0, 0}, {1, 2}, {0, 5}, {-3, -2}, {3, -4}, {2, 7}, {-2, 0}, {4, 2}, {-1, -3}};
int Y[9][2] = {{0}};
int T[9][2] = {{0}};

void Swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int Split(int A[9][2], int low, int high, int xy)
{
    int i, j, x, w;
    i = low;
    x = A[low][xy];
    for(j = low + 1; j <= high; ++j)
    {      
        if(A[j][xy] <= x)
        {
            i = i + 1;
            if(i != j)
            {   
                Swap(&A[i][0], &A[j][0]);
                Swap(&A[i][1], &A[j][1]);
            }
        }   
    }
    Swap(&A[low][0], &A[i][0]);
    Swap(&A[low][1], &A[i][1]);
    w = i;
    return w;
}

void QuickSor(int A[9][2], int low, int high, int xy)
{
    int w;
    if(low < high)
    {
        w = Split(A, low, high, xy);
        QuickSor(A, low, w - 1, xy);
        QuickSor(A, w + 1, high, xy);
    }
}

double Dist(int A[9][2], int B[9][2], int x, int y)
{
    double square;
    square = (A[x][0] - B[y][0]) * (A[x][0] - B[y][0]);
    square = square + (A[x][1] - B[y][1]) * (A[x][1] - B[y][1]);
    return sqrt(square);
}

double min(double x, double y, double z)
{
    if(x <= y && x <= z)
        return x;
    else if(y <= x && y <= z)
        return y;
    else
        return z;
}

double Cp(int low, int high)
{
    double x, y, z;
    if(high - low + 1 <= 3)
    {   
        x = Dist(S, S, low, low + 1);
        y = Dist(S, S, low, low + 2);
        z = Dist(S, S, low + 1, low + 2);
        return min(x, y, z);
    }
    int mid; 
    double Q, Q0, Q1, Q2;
    mid = (low + high) / 2;
    Q1 = Cp(low, mid);
    Q2 = Cp(mid + 1, high);
    Q = (Q1 < Q2)? Q1: Q2;
    int i, j, k;
    k = 0;
    for(i = 1; i <= N; ++i)
    {
        if(abs(Y[i][0] - S[mid][0]) < Q)
        {
            k = k + 1;
            T[k][0] = Y[i][0];
            T[k][1] = Y[i][1];
        }
    }
    Q0 = 2 * Q;//I think Q0 = Q is better than Q0 = 2 * Q.
    int m;
    for(i = 1; i <= k - 1; ++i)
    {
        m = ((i + 7) < k)? (i + 7): k;
        for(j = i + 1; j <= m; ++j)
        {
            if(Dist(T, T, i, j) < Q0)
                Q0 = Dist(T, T, i, j);
        }
    }
    Q = (Q < Q0)? Q: Q0;
    return Q;
}

int main()
{
    int i; double Q;
    QuickSor(S, 1, N, 1);
    for(i = 1; i <= N; ++i)
    {
        Y[i][0] = S[i][0];
        Y[i][1] = S[i][1];
    }
    QuickSor(S, 1, N, 0);
    Q = Cp(1, N);
    printf("The minmum distance is %.2lf.", Q);
    return 0;
}
