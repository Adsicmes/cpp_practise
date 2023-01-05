/*
 * Created by abbey on 2023/1/4.
 * cao?  思想混乱
 */
#include "ctime"
#include "iostream"
#include "cstring"
#include "iomanip"

using namespace std;

typedef struct bigint {
    char *num;
    char sign;
    int digit;
} BIGINT , *pBigint;

void init ( BIGINT *num ) {
    num->digit = ::strlen(num->num);
    if (num->num[0] == '-') {
        num->sign = -1;
        int i;
        for (i = 0; i < num->digit - 1; ++i) {
            num->num[i] = num->num[i+1];
        }
        num->num[i] = 0;
        num->digit --;
    } else { num->sign = 1; }
}

BIGINT add(pBigint x, pBigint y) {
    int i, carry = 0;
    BIGINT result;
    char result_num[x->digit];
    result.num = result_num;
    result.sign = x->sign;

    for (i = 0; i < x->digit; ++i) {
        result.num[i] = x->num[i];
    }

    for (i = 0; i < y->digit; ++i) {
        result.num[i] = result.num[i] + y->num[i] + carry;
        carry = result.num[i] / 10;
        result.num[i] = result.num[i] % 10;
    }

    if (carry) {
        result.num[i] = result.num[i] + carry;
    }

    return result;
}

int main() {
    clock_t start, stop;
    start = clock();

    // start
    char c;
    BIGINT x, y;
    cin >> x.num >> y.num >> c;

    switch (c) {
        case '+': {

        }
        case '-': {

        }
    }
    // end

    stop = clock();
    cout << ((double)(stop-start))/CLK_TCK;
    return 0;
}