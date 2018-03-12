//
// Created by Qian Hu on 2018/3/12.
// 剩下的树
// https://www.nowcoder.com/practice/f5787c69f5cf41499ba4706bc93700a2?tpId=60&tqId=29497&rp=0&ru=%2Fkaoyan%2Fretest%2F1001&qru=%2Fta%2Ftsing-kaoyan%2Fquestion-ranking&tPage=2
//

#include <iostream>
#include <algorithm>

using namespace std;

typedef struct Area {
    int left;
    int right;
} Area;

bool comp(Area a, Area b) {
    return a.left < b.left;
}

int main () {
    int l, m;

    while (cin >> l >> m) {
        Area areas[101];
        for (int i = 0; i < m; i++) {
            cin >> areas[i].left >> areas[i].right;
        }
        l = l + 1;
        sort(areas, areas + m, comp);
        int left, right;
        int i = 0;
        left = areas[i].left;
        right = areas[i].right;
        while (i < m) {
            i++;
            for (; i < m; i ++) {
                if (areas[i].left <= right) {
                    if (areas[i].right >= right) {
                        right = areas[i].right;
                    }
                } else {
                    l = l - (right - left + 1);
                    left = areas[i].left;
                    right = areas[i].right;
                    break;
                }
            }
        }
        l = l - (right - left + 1);
        cout << l << endl;
    }
    return 0;
}

