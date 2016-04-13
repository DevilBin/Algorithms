/*************************************************************************
	> File Name: 1.11.Psum.cpp
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: 2016/4/13 21:51:38
 ************************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <map>
#include <algorithm>
#include <sstream>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;
    int k = pow(n, 0.5);
    int sum[k + 1];
    for(int j = 1; j <= k; ++j) {
        sum[j] = 0;
        for(int i = 1; i <= j * j; ++i) {
            sum[j] = sum[j] + i;
        }
    }
    for(int i = 1; i <= k; ++i) {
        cout << sum[i] << ' ';
    }
    cout << endl;
    return 0;
}
