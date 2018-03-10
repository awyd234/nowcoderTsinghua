//
// Created by Qian Hu on 2018/3/10.
// 约数的个数
// https://www.nowcoder.com/practice/04c8a5ea209d41798d23b59f053fa4d6?tpId=60&tqId=29475&tPage=1&ru=%2Fkaoyan%2Fretest%2F1001&qru=%2Fta%2Ftsing-kaoyan%2Fquestion-ranking
//

#include <iostream>

#define MAX_SIZE 1010

using namespace std;

int main() {
    int n;
    int j;
    int num;
    int result [MAX_SIZE];

    while (cin >> n && n != 0) {
        for (int i = 0; i < n; i++) {
            cin >> num;
            result[i] = 0;
            for ( j= 1; j * j < num; j++) {
                if (num % j == 0) {
                    result[i] += 2;
                }
            }
            if (j * j == num) {
                result[i] ++;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << result[i] << endl;
        }
    }

    return 0;
}

