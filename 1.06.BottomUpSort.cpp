/*************************************************************************
	> File Name: 1.06.BottomUpSort.cpp
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: 2016/4/11 15:40:01
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

void merge(int arr[], int left, int mid, int right) {
    vector<int> capacity;
    int i = left; int j = mid + 1;
    while(i <= mid && j <= right) {
        if(arr[i] <= arr[j]) {
            capacity.push_back(arr[i]);
            ++i;
        }
        else {
            capacity.push_back(arr[j]);
            ++j;
        }
    }
    while(i <= mid) {
        capacity.push_back(arr[i]);
        ++i;
    }
    while(j <= right) {
        capacity.push_back(arr[j]);
        ++j;
    }
    for(int k = 0; k <= right - left; ++k) {
        arr[k + left] = capacity[k];
    }
}

void merge_sort(int arr[], int left, int right) {
    if(left < right) {
        int mid = (left + right) / 2;
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    int arr[] = {1, 4, 8, 11, 2, 7};
    merge_sort(arr, 0, sizeof(arr) / sizeof(arr[0]));
    for(unsigned i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        cout << arr[i] << ' ';
    }
    cout << endl;
    return 0;
}
