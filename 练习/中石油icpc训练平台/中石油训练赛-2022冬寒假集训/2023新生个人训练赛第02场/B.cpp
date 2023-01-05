/*
 * Created by abbey on 2023/1/4.
 * 没过，但是测试用例正确
 */
#include "iostream"

using namespace std;

void find(int N, int num[], int length, int *sumL, int *sumS) {
    int SL, SS, sum = 0;

    for (int i = 0; i < length; ++i) {
        sum += num[i];
    }
    SL = sum;
    SS = sum;
    sum = 0;

    int ii;
    for (int i = 0; i < N - length + 1; ++i) {
        ii = i;
        for (int j = 0; j < length; ++j) {
            sum += num[ii];
            ii += 1;
        }
        if (sum >= SL) { SL = sum; }
        if (sum <= SS) { SS = sum; }
        sum = 0;
    }

    *sumL = SL;
    *sumS = SS;
}

int main() {
    int N;
    cin >> N;

    int nums[N];
    for (int i = 0; i < N; ++i) {
        cin >> nums[i];
    }

    int sumL, sumS, RL = nums[0], RS = nums[0];
    for (int i = 1; i <= N; ++i) {
        find(N, nums, i, &sumL, &sumS);
        if (sumL >= RL) { RL = sumL; }
        if (sumS <= RS) { RS = sumS; }
    }

    cout << RL << endl << RS << endl;
    return 0;
}