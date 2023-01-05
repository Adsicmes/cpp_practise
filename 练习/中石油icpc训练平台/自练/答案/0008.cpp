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
    int x, y, z;
    cin >> x >> y >> z;
    cout << fixed << setprecision(5) << (double)(x + y + z) / 3 << endl;
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