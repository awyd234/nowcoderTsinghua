//
// Created by Qian Hu on 2018/3/11.
// 求最大最小数
// https://www.nowcoder.com/practice/82e5ff335eeb486aab359767895cc7b4?tpId=60&tqId=29485&tPage=1&ru=%2Fkaoyan%2Fretest%2F1001&qru=%2Fta%2Ftsing-kaoyan%2Fquestion-ranking
//

#include <iostream>

using namespace std;

int main () {
    int n;
    while (cin >> n) {
        int input;
        int min = 1000000;
        int max = -1000000;
        for (int i = 0; i < n; i++) {
            cin >> input;
            if (input < min) {
                min = input;
            }
            if (input > max) {
                max = input;
            }
        }
        cout << max << " " << min << endl;
    }
    return 0;
}

