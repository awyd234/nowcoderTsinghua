#include <iostream>
#include <stack>

using namespace std;

int main() {
    char str[32];
    int num[32];
    int length;

    while (cin >> str) {
        stack<int> result;
        for (length = 0; str[length] != '\0'; length++) {
            int this_num = str[length] - '0';
            num[length] = this_num;
        }
        int cur = 0;
        while (cur < length) {
            result.push(num[length - 1] % 2);
            for (int i = cur; i < length; i++) {
                if (num[i] % 2 == 1) {
                    num[i + 1] += 10;
                }
                num[i] = num[i] / 2;
            }
            while (num[cur] == 0) {
                cur ++;
            }
        }
        while (!result.empty()) {
            cout << result.top();
            result.pop();
        }
    }

    return 0;
}