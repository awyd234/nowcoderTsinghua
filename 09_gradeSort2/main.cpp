//
// Created by Qian Hu on 2018/3/10.
// 成绩排序
// https://www.nowcoder.com/practice/3f27a0a5a59643a8abf0140b9a8cf1f7?tpId=60&tqId=29481&tPage=1&ru=%2Fkaoyan%2Fretest%2F1001&qru=%2Fta%2Ftsing-kaoyan%2Fquestion-ranking
//

#include <iostream>
#include <vector>

using namespace std;

int main () {
    int n, tmp_index;
    while (cin >> n) {
        vector<int> num(n, -1);
        vector<int> scores(n, -1);
        vector<int> index(n);
        for (int i = 0; i < n; i++) {
            cin >> num[i] >> scores[i];
            index[i] = i;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (scores[index[j]] > scores[index[j + 1]]) {
                    tmp_index = index[j];
                    index[j] = index[j + 1];
                    index[j + 1] = tmp_index;
                } else if (scores[index[j]] == scores[index[j + 1]]) {
                    if (num [index[j]] > num[index[j + 1]]) {
                        tmp_index = index[j];
                        index[j] = index[j + 1];
                        index[j + 1] = tmp_index;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++) {
            cout << num[index[i]] << " " << scores[index[i]] << endl;
        }
    }
    return 0;
}

