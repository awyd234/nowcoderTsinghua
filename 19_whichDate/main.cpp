//
// Created by Qian Hu on 2018/3/11.
// 今年的第几天？
// https://www.nowcoder.com/practice/ae7e58fe24b14d1386e13e7d70eaf04d?tpId=60&tqId=29491&rp=0&ru=%2Fkaoyan%2Fretest%2F1001&qru=%2Fta%2Ftsing-kaoyan%2Fquestion-ranking&tPage=1
//

#include <iostream>
#include <vector>

using namespace std;

bool isLeapYear(int year) {
    if (year % 100 == 0) {
        if (year % 400 == 0) {
            return true;
        }
    } else if (year % 4 == 0) {
        return true;
    }
    return false;
}


int main () {
    int year, month, day;
    vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while (cin >> year >> month >> day) {
        int ans = 0;
        for (int i = 0; i < month - 1; i++) {
            ans += days[i];
        }
        ans += day;
        if (month > 2 && isLeapYear(year)) {
            ans += 1;
        }
        cout << ans << endl;
    }
    return 0;
}

