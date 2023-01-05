/*
 * 时间超限
 */
#include <ctime>
#include "iostream"

using namespace std;

int main() {
    clock_t start, stop;
    start = clock();

    int num, count = 0, sum = 0;
    cin >> num;
    int j = 0;
    for (int i = 1; i <= num; ++i) {

        for (j = 1; j*j <= i; ++j) {
            if (i % j == 0) {
                sum += j;
                if ( j != i / j) {
                    sum += i / j;
                }
            }
        }

        if (sum == i) {
            count += 1;
        }
        sum = 0;
    }

    cout << count << endl;

    stop = clock();
    cout << ((double)(stop-start))/CLK_TCK;
    return 0;
}