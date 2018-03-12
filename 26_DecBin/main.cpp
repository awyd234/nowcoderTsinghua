//
// Created by Qian Hu on 2018/3/12.
// 10进制 VS 2进制
// https://www.nowcoder.com/practice/fd972d5d5cf04dd4bb4e5f027d4fc11e?tpId=60&tqId=29498&rp=0&ru=%2Fkaoyan%2Fretest%2F1001&qru=%2Fta%2Ftsing-kaoyan%2Fquestion-ranking&tPage=2
//

#include <iostream>
#include <queue>

using namespace std;

int main () {
    string input;

    while (cin >> input) {
        int length = input.size();
        queue<int> bin;
        vector<int> origin(length, -1);
        vector<int> ans(10010, 0);
        for (int i = 0; i < length; i++) {
            origin[i] = input.at(i) - '0';
        }
        int cur = 0, level = 1;
        while (cur < length) {
            for (int i = cur; i < length - 1; i++) {
                if (origin[i] % 2 == 1) {
                    origin[i + 1] += 10;
                }
                origin[i] = origin[i] / 2;
                if (origin[cur] == 0) {
                    cur ++;
                }
            }
            bin.push(origin[length - 1] % 2);
            origin[length - 1] /= 2;
            if (origin[cur] == 0) {
                cur ++;
            }
        }
        int thisLength = 1;
        while (bin.front() == 0) {
            bin.pop();
        }
        while (!bin.empty()) {
            int carry = 0;
            for (int i = 0; i < thisLength; i++) {
                ans[i] *= 2;
                ans[i] += carry;
                carry = ans[i] / 10;
                ans[i] = ans[i] % 10;
            }
            if (carry > 0) {
                ans[thisLength++] = carry;
            }
            carry = bin.front();
            int i;
            for (i = 0; i < thisLength; i++) {
                ans[i] += carry;
                if (ans[i] >= 10) {
                    carry = ans[i] / 10;
                    ans[i] = ans[i] - 10;
                } else {
                    break;
                }
            }
            bin.pop();
        }
        int i = length - 1;
        while (ans[i] == 0) {
            i--;
        }
        for (; i >= 0; i--) {
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}

