/*
 *
 */
#include "ctime"
#include "iostream"
#include "cstring"
#include "iomanip"

using namespace std;

int main() {
    clock_t start, stop;
    start = clock();

    // start

    // end

    stop = clock();
    cout << ((double)(stop-start))/CLK_TCK;
    return 0;
}