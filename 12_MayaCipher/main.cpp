//
// Created by Qian Hu on 2018/3/11.
// 玛雅人的密码
// 有参考，可以作为标准的bfs代码，不用构建图
// https://www.nowcoder.com/practice/761fc1e2f03742c2aa929c19ba96dbb0?tpId=60&tqId=29484&tPage=1&ru=%2Fkaoyan%2Fretest%2F1001&qru=%2Fta%2Ftsing-kaoyan%2Fquestion-ranking
//

#include <iostream>
#include <map>
#include <queue>

using namespace std;

typedef pair<string, int> pii;

bool judge(string str) {
    int length = str.length();
    for (int i = 0; i < length - 3; i++) {
        if (str[i] == '2' && str[i + 1] == '0' && str[i + 2] == '1' && str[i + 3] == '2') {
            return true;
        }
    }
    return false;
}

int bfs(string s, int n) {
    map<string, int> mp;
    mp.clear();
    queue<pii> que;
    que.push(make_pair(s, 0));

    while (!que.empty()) {
        pii now = que.front();
        que.pop();
        string str = now.first;
        if (judge(str)) {
            return now.second;
        }
        if (mp[str]) {
            continue;
        }
        mp[str] = 1;
        for (int i = 0; i < n - 1; i++) {
            swap(str[i], str[i + 1]);
            que.push(make_pair(str, now.second + 1));
            swap(str[i], str[i + 1]);
        }
    }

    return -1;
}

int main () {
    int n;
    while (cin >> n) {
        string input;
        cin >> input;
        cout << bfs(input, n) << endl;
    }
    return 0;
}

