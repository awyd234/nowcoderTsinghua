//
// Created by Qian Hu on 2018/3/11.
// abc
// https://www.nowcoder.com/practice/912b15e237ef44148e44018d7b8750b6?tpId=60&tqId=29487&tPage=1&ru=%2Fkaoyan%2Fretest%2F1001&qru=%2Fta%2Ftsing-kaoyan%2Fquestion-ranking
//

#include <iostream>

using namespace std;

int main () {
    int num = 532;
    for (int a = 0; a <= 9; a++) {
        if (a * 100 > num) {
            break;
        }
        for (int b = 0; b <= 9; b++) {
            if (a * 100 + 110 * b > num) {
                break;
            }
            for (int c = 0; c <= 9; c++) {
                if (a * 100 + b * 110 + c * 12 == num) {
                    cout << a << " " << b << " " << c << endl;
                    break;
                }
            }
        }
    }
    return 0;
}

