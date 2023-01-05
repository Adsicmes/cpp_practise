//
// Created by abbey on 2023/1/5.
//

#include "ctime"
#include "iostream"
#include "cstring"
#include "iomanip"

using namespace std;

int main() {
//    clock_t start, stop;
//    start = clock();

    // start
    int a, b, c;
    cin >> a >> b >> c;
    cout << ( a + (a + 2*c) ) * b / 2 << endl;
    // end

//    stop = clock();
//    cout << ((double)(stop-start))/CLK_TCK;

    return 0;
}