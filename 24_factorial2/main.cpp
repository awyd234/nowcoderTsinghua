//
// Created by Qian Hu on 2018/3/11.
// N的阶乘（复杂版）
// https://www.nowcoder.com/practice/f54d8e6de61e4efb8cce3eebfd0e0daa?tpId=60&tqId=29496&rp=0&ru=%2Fkaoyan%2Fretest%2F1001&qru=%2Fta%2Ftsing-kaoyan%2Fquestion-ranking&tPage=2
//

#include <iostream>
#include <vector>

using namespace std;


int main () {
    int n;
    while (cin >> n) {
        int length = 0;
        vector<int> result(3000, 0);
        result[0] = 1;
        for (int i = 1; i <= n; i++) {
            int k = 0;
            for (int j = 0; j <= length; j++) {
                int thisResult = result[j] * i + k;
                result[j] = thisResult % 10;
                k = thisResult / 10;
            }
            while (k != 0) {
                result[++length] = k % 10;
                k = k/10;
            }
        }
        for (int i = length; i >= 0; i--) {
            cout << result[i];
        }
        cout << endl;
    }
    return 0;
}

