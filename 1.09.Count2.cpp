/*************************************************************************
	> File Name: 1.09.Count2.cpp
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: 2016/4/13 21:47:06
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
    int count = 0;
    cin >> n; 
    for(int i = 1; i <= n; ++i) {
        int m = n / i;
        for(int j = 1; j <= m; ++j) {
            count += 1;
        }
    }
    cout << "count: " << count << endl;
    return 0;
}
