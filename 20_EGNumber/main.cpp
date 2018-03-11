//
// Created by Qian Hu on 2018/3/11.
// 完数VS盈数
// https://www.nowcoder.com/practice/ccc3d1e78014486fb7eed3c50e05c99d?tpId=60&tqId=29492&rp=0&ru=%2Fkaoyan%2Fretest%2F1001&qru=%2Fta%2Ftsing-kaoyan%2Fquestion-ranking&tPage=1
//

#include <iostream>
#include <queue>

using namespace std;

int main () {
    queue<int> eNumbers;
    queue<int> gNumbers;
    for (int number = 2; number <= 60; number++) {
        int this_number = number;
        for (int i = 1; i < number; i++) {
            if (number % i == 0) {
                this_number -= i;
            }
            if (this_number < 0) {
                break;
            }
        }
        if (this_number == 0) {
            eNumbers.push(number);
        } else if (this_number < 0) {
            gNumbers.push(number);
        }
    }
    cout << "E:";
    while (!eNumbers.empty()) {
        cout << " " << eNumbers.front();
        eNumbers.pop();
    }
    cout << endl;
    cout << "G:";
    while (!gNumbers.empty()) {
        cout << " " << gNumbers.front();
        gNumbers.pop();
    }
    cout << endl;
    return 0;
}

