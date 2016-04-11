/*************************************************************************
	> File Name: 1.04.SelectionSort.cpp
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: 2016/4/11 15:06:14
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
    int arr[] = {5, 7, 2, 9, 1, 3, 5, 4, 6};

    for(unsigned i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        unsigned flag = i;
        for(unsigned j = i + 1; j < sizeof(arr) / sizeof(arr[0]); ++j) {
            if(arr[j] < arr[flag]) {
                flag = j;
            }
        }
        if(flag != i) {
            swap(arr[flag], arr[i]);
        }
    }

    for(unsigned i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        cout << arr[i] << ' ';
    }
    cout << endl;
    return 0;
}
