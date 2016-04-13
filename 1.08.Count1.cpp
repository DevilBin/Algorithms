/*************************************************************************
	> File Name: 1.08.Count1.cpp
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: 2016/4/13 20:59:21
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
    while(n >= 1) {
        for(int j = 1; j <= n; ++j) {
            count += 1;
        }
        n = n / 2;
    }
    cout << "count: " << count << endl;
    return 0;
}
