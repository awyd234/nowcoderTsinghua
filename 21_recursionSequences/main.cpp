//
// Created by Qian Hu on 2018/3/11.
// 递推数列
// https://www.nowcoder.com/practice/d0e751eac618463bb6ac447369e4aa25?tpId=60&tqId=29493&rp=0&ru=%2Fkaoyan%2Fretest%2F1001&qru=%2Fta%2Ftsing-kaoyan%2Fquestion-ranking&tPage=2
//

#include <iostream>
#include <vector>

using namespace std;

int main () {
    int a0, a1, p, q, k;
    while (cin >> a0 >> a1 >> p >> q >> k) {
        vector<int> result(k + 1, 0);
        result[0] = a0 % 10000;
        result[1] = a1 % 10000;
        for (int i = 2; i <= k; i++) {
            result[i] = (p * result[i - 1] + q * result[i - 2]) % 10000;
        }
        cout << result[k] << endl;
    }
    return 0;
}

