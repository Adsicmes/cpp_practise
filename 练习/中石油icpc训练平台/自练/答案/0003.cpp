//
// Created by abbey on 2023/1/5.
//
#include "ctime"
#include "iostream"
#include "cstring"
#include "iomanip"

using namespace std;

void my_answer() {
    // start
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    cout << c * d + a * (d + b + e) << endl;
    // end
}

int main() {
//    clock_t start, stop;
//    start = clock();
    my_answer();
//    stop = clock();
//    cout << ((double)(stop-start))/CLK_TCK;
    return 0;
}