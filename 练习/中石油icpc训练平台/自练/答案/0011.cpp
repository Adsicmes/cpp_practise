//
// Created by abbey on 2023/1/5.
//
#include "ctime"
#include "iostream"
#include "cstring"
#include "iomanip"
#include "cmath"

using namespace std;

void my_answer() {
    // start
    int a, b;
    cin >> a >> b;
    cout << (a % 10 + b % 10) % 10 << endl;
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