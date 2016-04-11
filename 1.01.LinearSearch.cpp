/*************************************************************************
	> File Name: 1.01.LinearSearch.cpp
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: 2016/4/11 14:32:04
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
    unsigned index = 0;
    int arr[] = {1, 4, 5, 7, 8, 9, 10};
   
    cin >> target;
    while(index < sizeof(arr) / sizeof(arr[0])) {
        if(arr[index] == target) {
            cout << "index: " << index << endl;
            break;
        }
        ++index;
    }
    if(index == sizeof(arr) / sizeof(arr[0])) {
        cout << "Not found!" << endl;
    }
    return 0;
}
