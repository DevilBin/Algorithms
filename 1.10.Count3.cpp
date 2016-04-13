/*************************************************************************
	> File Name: 1.10.Count3.cpp
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: 2016/4/13 21:49:12
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
    for(int i = 0; i <= n; ++i) {
        int j = 2;
        while(j <= n) {
            j = j * j;
            count += 1;
        }
    }
    cout << "count: " << count << endl;
    return 0;
}
