//
// Created by Qian Hu on 2018/3/10.
// 整数拆分
// https://www.nowcoder.com/practice/376537f4609a49d296901db5139639ec?tpId=60&tqId=29480&tPage=1&ru=%2Fkaoyan%2Fretest%2F1001&qru=%2Fta%2Ftsing-kaoyan%2Fquestion-ranking
//

#include <iostream>
#include <vector>

#define MAX_SIZE 10000001

using namespace std;

int main () {
    int input;
    vector<int> result(MAX_SIZE, -1);
    result[1] = 1;
    while (cin >> input) {
        for (int i = 2; i <= input; i++) {
            if (result[i] == -1) {
                if (i % 2 == 1) {
                    result[i] = result[i - 1] % 1000000000;
                } else {
                    result[i] = (result[i - 1] + result[i / 2]) %1000000000;
                }
            }
        }
        cout << result[input] << endl;
    }
    return 0;
}

