//
// Created by Qian Hu on 2018/3/11.
// 特殊乘法
// https://www.nowcoder.com/practice/a5edebf0622045468436c74c3a34240f?tpId=60&tqId=29490&rp=0&ru=%2Fkaoyan%2Fretest%2F1001&qru=%2Fta%2Ftsing-kaoyan%2Fquestion-ranking&tPage=1
//

#include <iostream>

using namespace std;


int main () {
    string a, b;
    while (cin >> a >> b) {
        int ans = 0;
        for (int i = 0; i < a.size(); i++) {
            for (int j = 0; j < b.size(); j++) {
                ans += (a[i] - '0') * (b[j] - '0');
            }
        }
        cout << ans << endl;
    }
    return 0;
}

