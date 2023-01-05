#include "math.h"


int is_odd(int num) {
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

int is_prime(int p) {
    /*
     * 判断质数
     */
    if (p < 2) {
        return 0;
    }

    for (int i = 2; i < p; ++i) {
        if (p % i == 0) {
            return 0;
        }
    }
    return 1;
}

double triangle_area_herons_formula(double a, double b, double c) {
    /*
     * 已知三角形三边长求面积
     * 利用海伦公式求三角形面积
     */
    double p = (a + b + c) / 2;
    return sqrt(p * (p-a) * (p-b) * (p-c));
};
