//
// Created by Qian Hu on 2018/3/11.
// 最小花费
// https://www.nowcoder.com/practice/e6df3e3005e34e2598b9b565cfe797c9?tpId=60&tqId=29495&rp=0&ru=%2Fkaoyan%2Fretest%2F1001&qru=%2Fta%2Ftsing-kaoyan%2Fquestion-ranking&tPage=2
//

#include <iostream>
#include <vector>

using namespace std;

int cost (int distance, int l1 ,int l2, int l3, int c1, int c2, int c3) {
    if (distance <= l1) {
        return c1;
    } else if (distance <= l2) {
        return c2;
    } else if (distance <= l3) {
        return c3;
    } else {
        return -1;
    }
}

int main () {
    int l1, l2, l3, c1, c2, c3;
    while (cin >> l1 >> l2 >> l3 >> c1 >> c2 >> c3) {
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> stops(n, -1);
        vector<int> minCost(n, 100000000);
        stops[a - 1] = 0;
        for (int i = 1; i < n; i++) {
            cin >> stops[i];
        }
        minCost[a - 1] = 0;
        for (int i = a; i < b; i ++) {
//            cin >> stops[i];
            for (int j = a - 1; j < i; j++) {
                if (stops[i] - stops[j] > l3) {
                    continue;
                }
                int thisCost = cost(stops[i] - stops[j], l1, l2, l3, c1, c2, c3);
                if (thisCost + minCost[j] < minCost[i]) {
                    minCost[i] = thisCost + minCost[j];
                }
            }
        }
        cout << minCost[b - 1] << endl;
    }
    return 0;
}

