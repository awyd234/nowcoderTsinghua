//
// Created by Qian Hu on 2018/3/10.
//

#include <iostream>

#define MAX_SIZE 1000

using namespace std;

int main() {
    int n, sort_type;
    int tmp_index;
    int score[MAX_SIZE];
    int index[MAX_SIZE];
    string name[MAX_SIZE];

    while (cin >> n >> sort_type) {
        for (int i = 0; i < n; i++) {
            cin >> name[i] >> score[i];
            index[i] = i;
        }

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (sort_type == 0) {
                    if (score[index[j]] < score[index[j + 1]]) {
                        tmp_index = index[j];
                        index[j] = index[j + 1];
                        index[j + 1] = tmp_index;
                    }
                } else {
                    if (score[index[j]] > score[index[j + 1]]) {
                        tmp_index = index[j];
                        index[j] = index[j + 1];
                        index[j + 1] = tmp_index;
                    }
                }
            }
        }

        for (int i = 0; i < n; i++) {
            cout << name[index[i]] << " " << score[index[i]] << endl;
        }
    }
    return 0;
}