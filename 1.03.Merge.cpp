/*************************************************************************
	> File Name: 1.03.Merge.cpp
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: 2016/4/11 14:56:45
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
    int arr_0[] = {2, 3, 13};
    int arr_1[] = {7, 11, 12, 45, 57};
    int size_0 = sizeof(arr_0) / sizeof(arr_0[0]);
    int size_1 = sizeof(arr_1) / sizeof(arr_1[0]);
    vector<int> result; 

    int i = 0; int j = 0;
    while(i < size_0 && j < size_1) {
        if(arr_0[i] <= arr_1[j]) {
            result.push_back(arr_0[i]);
            ++i;
        }
        else {
            result.push_back(arr_1[j]);
            ++j;
        }
    }

    while(i < size_0) {
        result.push_back(arr_0[i]);
        ++i;
    }
    while(j < size_1) {
        result.push_back(arr_1[j]);
        ++j;
    }

    for(auto x : result) {
        cout << x << ' ';
    }
    cout << endl;
    return 0;
}
