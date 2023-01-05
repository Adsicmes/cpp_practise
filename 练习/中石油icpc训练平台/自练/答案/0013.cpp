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
    int n;
    cin >> n;
    int day = n/86400;
    int month = day/30;
    int year = month/12;

    day = 1+day%30;
    month = 1+month%12;
    year = 2011+year;
    if (day > 30) {
        day -= 30;
        month ++;
    }
    if (month > 12) {
        month -= 12;
        year ++;
    }

    cout << year << " " << month << " " << day << endl;
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