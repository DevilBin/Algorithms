/*************************************************************************
	> File Name: 1.07.BruteForcePrimalitytest.cpp
	> Author: DevilBin 
	> Mail: whu.evil.binary@gmail.com 
	> Created Time: 2016/4/13 20:43:32
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

bool find_prime(int x) {
    int squre_root = pow(x, 0.5);
    for(int i = 2; i <= squre_root; ++i) {
        if(x % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int input_number;
    while(cin >> input_number) {
        if(find_prime(input_number)) {
            cout << input_number << " is prime number." << endl;
        }
        else {
            cout << input_number << " is not prime number." << endl;
        }
    }
    return 0;
}
