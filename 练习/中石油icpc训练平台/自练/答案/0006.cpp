//
// Created by abbey on 2023/1/5.
//
#include "ctime"
#include "iostream"
#include "cstring"
#include "iomanip"
#include "cmath"

using namespace std;

int main() {
//    Timer
//    clock_t start, stop;
//    start = clock();

    int h, m, hh, mm;
    cin >> h >> m >> hh >> mm;
    m = m + mm;
    if (m >= 60) {
        cout
        << setw(2) << setfill('0') << (((h + hh) % 24 + 1 == 24) ? 0 : ((h + hh) % 24 + 1))
        << ":"
        << setw(2) << setfill('0') << m-60 << endl;
    } else {
        cout
        << setw(2) << setfill('0') << (h + hh) % 24
        << ":"
        << setw(2) << setfill('0') << m << endl;
    }

//    stop = clock();
//    cout << ((double)(stop-start))/CLK_TCK;
    return 0;
}