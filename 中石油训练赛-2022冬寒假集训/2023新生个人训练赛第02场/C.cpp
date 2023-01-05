/*
 * Created by abbey on 2023/1/4.
 * 没过，但是测试用例正确
 */
#include "iostream"
#include "cstring"
#include "iomanip"

using namespace std;

float calc(int step, int day) {
    float coin;

    if (step < 1000) {
        return 0;
    } else {
        coin = 0.3 + (int)((step - 1000)/2000) * 0.1;
    }

    if (day > 3) {
        for (int i = 0; i < (day-3); ++i) {
            coin *= 2;
        }
    }

    if (day <= 3) {
        if (coin > 3) {
            coin = 3;
        }
    } else {
        if (coin > 6) {
            coin = 6;
        }
    }
    return coin;
}

int main() {
    int N;
    cin >> N;

    int step, is_checked;
    float coin = 0;
    int day = 0;
    for (int i = 0; i < N; ++i) {
        cin >> step >> is_checked;
        if (is_checked) {
            day += 1;
            float coin_get = calc(step, day);
            coin += coin_get;
        }
        else { day = 0; }
    }

    cout << fixed << setprecision(1) << coin << endl;
}