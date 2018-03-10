//
// Created by Qian Hu on 2018/3/10.
// 球的半径和体积
// https://www.nowcoder.com/practice/4b733a850c364c32b368555c8c2ec96b?tpId=60&tqId=29482&tPage=1&ru=%2Fkaoyan%2Fretest%2F1001&qru=%2Fta%2Ftsing-kaoyan%2Fquestion-ranking
//

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main () {
    int x0, y0, z0, x1, y1, z1;
    while (cin >> x0 >> y0 >> z0 >> x1 >> y1 >> z1) {
        double radius = sqrt(pow(x0 - x1, 2) + pow(y0 - y1, 2) + pow(z0 - z1, 2));
        double volumn = acos(-1) * pow(radius, 3) * 4 / 3.0;
        cout << fixed << setprecision(3) << radius << " " << volumn << endl;
    }
    return 0;
}

