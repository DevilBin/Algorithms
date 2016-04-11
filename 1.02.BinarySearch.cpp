/*************************************************************************
	> File Name: 1.02.BinarySearch.cpp
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: 2016/4/11 14:45:57
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
    int target;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int low = 0; int high = sizeof(arr) / sizeof(arr[0]) - 1;
    
    cin >> target;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == target) {
            cout << "index: " << mid + 1 << endl;
            break;
        }
        else if(arr[mid] > target) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    if(low > high) {
        cout << "Not found!" << endl;
    }

    return 0;
}
