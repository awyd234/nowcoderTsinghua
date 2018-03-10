//
// Created by Qian Hu on 2018/3/10.
// 代理服务器
// 访问的服务器应该是顺序访问，所以会有个最优序列
// https://www.nowcoder.com/practice/1284469ee94a4762848816a42281a9e0?tpId=60&tqId=29476&tPage=1&ru=%2Fkaoyan%2Fretest%2F1001&qru=%2Fta%2Ftsing-kaoyan%2Fquestion-ranking
//

#include <iostream>
#include <vector>

using namespace std;

int main () {
    int n, m;
    while (cin >> n) {
        vector<string> agencies(n, "");
        for (int i = 0; i < n; cin >> agencies[i++]);
        cin >> m;
        vector<string> ips(m, "");
        for (int i = 0; i < m; cin >> ips[i++]);

        bool flag = true; // 标志位
        int index = 0, count = 0; // index，ips中已经访问过的
        while (flag && index != m) {
            int max = 0; // 当前能访问最多ip的那个agency
            for (int i = 0; i < n; i++) {
                int j = index;
                while (agencies[i] != ips[j] && j < m) {
                    j++;
                }
                if (j - index > max) {
                    max = j - index;
                }
            }
            if (max == 0) { // 剩下的全都无法访问了
                flag = false;
            }
            count ++;
            index += max;
        }
        if (flag) {
            cout << count - 1 << endl;
        } else {
            cout << "-1" << endl;
        }
    }
    return 0;
}

