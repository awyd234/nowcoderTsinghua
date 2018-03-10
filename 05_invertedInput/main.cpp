//
// Created by Qian Hu on 2018/3/10.
// 反序输出
// https://www.nowcoder.com/practice/171278d170c64d998ab342b3b40171bb?tpId=60&tqId=29477&tPage=1&ru=%2Fkaoyan%2Fretest%2F1001&qru=%2Fta%2Ftsing-kaoyan%2Fquestion-ranking
//

#include <iostream>

using namespace std;

int main () {
    string input;
    while (cin >> input) {
        long length = input.length();
        while (length --) {
            cout << input[length];
        }
        cout << endl;
    }
    return 0;
}

