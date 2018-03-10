//
// Created by Qian Hu on 2018/3/10.
// 质因数的个数
// https://www.nowcoder.com/practice/20426b85f7fc4ba8b0844cc04807fbd9?tpId=60&tqId=29479&tPage=1&ru=%2Fkaoyan%2Fretest%2F1001&qru=%2Fta%2Ftsing-kaoyan%2Fquestion-ranking
//

#include <iostream>

using namespace std;

int main () {
    int input;
    while (cin >> input) {
        int count = 0;
        while(input > 1) {
            for (int i = 2; i <= input; i++) {
                if (input % i == 0) {
                    input /= i;
                    count++;
                    break;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}

