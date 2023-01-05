//
// Created by abbey on 2023/1/5.
//
#include "ctime"
#include "iostream"
#include "cstring"
#include "iomanip"
#include "cmath"

using namespace std;

double triangle_area_herons_formula(double a, double b, double c) {
    /*
     * 已知三角形三边长求面积
     * 利用海伦公式求三角形面积
     */
    double p = (a + b + c) / 2;
    return sqrt(p * (p-a) * (p-b) * (p-c));
};

void my_answer() {
    // start
    double aa, bb, cc;
    cin >> aa >> bb >> cc;

    double a = sqrt(aa),
           b = sqrt(bb),
           c = sqrt(cc);

    cout << fixed << setprecision(2) << triangle_area_herons_formula(a, b, c) << endl;
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