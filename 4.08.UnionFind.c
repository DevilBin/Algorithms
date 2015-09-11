/*************************************************************************
	> File Name: 4.08.UnionFind.c
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: Tue 01 Sep 2015 06:45:10 PM CST
 ************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#define N 9

int P[10][2] = {{0}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}};
//P[][0] is parent node, p[][1] is rank

int Find(int x)
{
    int y, w, root;
    y = x;
    while(P[y][0] != 0)
    {
        y = P[y][0];
    }
    root = y; y = x;
    while(P[y][0] != 0)
    {
        w = P[y][0];
        P[y][0] = root;
        y = w;
    }
    return root;
}

void Union(int x, int y)
{
    int u, v;
    u = Find(x); v = Find(y);
    if(P[u][1] <= P[v][1])
    {
        P[u][0] = v;
        if(P[u][1] == P[v][1])
        {   
            P[v][1] = P[v][1] + 1;
        }
    }
    else
        P[v][0] = u;
}

int main()
{
    int i, j;
    Union(1, 2);
    Union(3, 4);
    Union(5, 6);
    Union(7, 8);
    Union(2, 4);
    Union(8, 9);
    Union(6, 8);
    Find(5);
    Union(4, 8);
    Find(1);
    for(i = 1; i <= N; ++i)
    {
        for(j = 0; j <= 1; ++j)
        {
            printf("%d ", P[i][j]);
        }
        printf("\t");
    }
    return 0;
}
