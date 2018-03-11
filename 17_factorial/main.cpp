//
// Created by Qian Hu on 2018/3/11.
// n的阶乘
// https://www.nowcoder.com/practice/97be22ee50b14cccad2787998ca628c8?tpId=60&tqId=29489&rp=0&ru=%2Fkaoyan%2Fretest%2F1001&qru=%2Fta%2Ftsing-kaoyan%2Fquestion-ranking&tPage=1
//

#include <iostream>

using namespace std;


int main () {
    int n;
    while (cin >> n) {
        long long ans = 1;
        for (int i = 1; i <= n; i++) {
            ans *= i;
        }
        cout << ans << endl;
    }
    return 0;
}

