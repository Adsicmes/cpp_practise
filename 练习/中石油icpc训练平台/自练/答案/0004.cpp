//
// Created by abbey on 2023/1/5.
//
#include "ctime"
#include "iostream"
#include "cstring"
#include "iomanip"
#include "cmath"

using namespace std;

int odd_even_check(int num) {
    /*
     * 判断奇偶
     * 偶1奇0
     */
    if (num % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

void my_answer() {
    // start
    int L;
    cin >> L;
    if (odd_even_check(L/2)) {
        cout << pow(L/2/2, 2) << endl;
    } else {
        cout << (L/2/2) * (L/2/2+1) << endl;
    }
    // end
}

int main() {
//    Timer
//    clock_t start, stop;
//    start = clock();

    my_answer();

//    stop = clock();
//    cout << ((double)(stop-start))/CLK_TCK;
    return 0;
}