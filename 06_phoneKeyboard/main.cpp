//
// Created by Qian Hu on 2018/3/10.
// 手机键盘
// https://www.nowcoder.com/practice/20082c12f1ec43b29cd27c805cd476cd?tpId=60&tqId=29478&tPage=1&ru=%2Fkaoyan%2Fretest%2F1001&qru=%2Fta%2Ftsing-kaoyan%2Fquestion-ranking
//

#include <iostream>

using namespace std;

int main () {
    string input;
    while (cin >> input) {
        int count = 0;

        int loc[27]={1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 6,
                     7, 7, 7, 8, 8, 8, 8, 9};
        int last_word = 26;
        int this_word;
        for (int i = 0; i < input.size(); i++) {
            this_word = input.at(i) - 'a';
            if (loc[this_word] == loc[last_word]) {
                count += 2;
            }
            for (int j = this_word; loc[this_word] == loc[j]; j--) {
                count ++;
            }
            last_word = this_word;
        }

        cout << count << endl;
    }
    return 0;
}

