/*************************************************************************
	> File Name: 1.05.InsertionSort.cpp
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: 2016/4/11 15:11:59
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
    int size_0 = sizeof(arr) / sizeof(arr[0]);

    for(int i = 1; i < size_0; ++i) {
        int x = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > x) {
            arr[j + 1] = arr[j];
            --j;
        }
        if(i != (j + 1)) {
            arr[j + 1] = x;
        }
    }
    for(int i = 0; i < size_0; ++i) {
        cout << arr[i] << ' ';
    }
    cout << endl;

    return 0;
}
