//
// Created by Qian Hu on 2018/3/11.
// 最大序列和
// https://www.nowcoder.com/practice/df219d60a7af4171a981ef56bd597f7b?tpId=60&tqId=29494&rp=0&ru=%2Fkaoyan%2Fretest%2F1001&qru=%2Fta%2Ftsing-kaoyan%2Fquestion-ranking&tPage=2
//

#include <iostream>

using namespace std;

int main () {
    int n;
    while (cin >> n) {
        long long sum = -9223372036854775807;
        int nowSum = 0;
        int input;
        for (int i = 0; i < n; i++) {
            cin >> input;
            nowSum += input;
            if (nowSum > sum) {
                sum = nowSum;
            }
            if (nowSum < 0) {
                nowSum = 0;
            }
        }
        cout << sum << endl;
    }
    return 0;
}

