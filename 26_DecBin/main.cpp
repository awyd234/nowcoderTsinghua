//
// Created by Qian Hu on 2018/3/12.
// 10进制 VS 2进制
// https://www.nowcoder.com/practice/fd972d5d5cf04dd4bb4e5f027d4fc11e?tpId=60&tqId=29498&rp=0&ru=%2Fkaoyan%2Fretest%2F1001&qru=%2Fta%2Ftsing-kaoyan%2Fquestion-ranking&tPage=2
//

#include <iostream>
#include <queue>
#include <vector>

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
        int thisLength = 0;
        while (!bin.empty()) {
            int thisValue = bin.front();
            bin.pop();
            for (int i = 0; i < thisLength; i++) {
                ans[i] = ans[i] * 2;
            }

//            int nowValue = bin.top() * level;
//            int i = 0;
//            while (nowValue > 0) {
//                ans[i] += nowValue % 10;
//                if (ans[i] >= 10) {
//                    ans[i] -= 10;
//                    ans[i + 1] += 1;
//                }
//                nowValue /= 10;
//                i++;
//                if (i > thisLength) {
//                    thisLength = i;
//                }
//            }
//            level *= 2;
//            bin.pop();
        }
        for (int i = 0; i < length; i++) {
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}

