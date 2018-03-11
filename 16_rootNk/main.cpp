//
// Created by Qian Hu on 2018/3/11.
// 求root(N, k)
// https://www.nowcoder.com/practice/9324a1458c564c4b9c4bfc3867a2aa66?tpId=60&tqId=29488&rp=0&ru=%2Fkaoyan%2Fretest%2F1001&qru=%2Fta%2Ftsing-kaoyan%2Fquestion-ranking&tPage=1
//

#include <iostream>

using namespace std;

long long quickPow(long long base, long long n, int k) {
    long long  ans = 1;
    while (n) {
        if (n & 1) { // n为奇数
            ans = (base * ans) % k;
        }
        base = (base * base) % k;
        n >>= 1;
    }
    return ans;
}

int main () {
    int x, y, k;
    while (cin >> x >> y >> k) {
        long long ans = quickPow(x, y, k - 1); // x^y % (k-1)
        if (ans == 0) {
            ans = k - 1;
        }

        cout << ans << endl;
    }
    return 0;
}

