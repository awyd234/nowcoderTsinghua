//
// Created by Qian Hu on 2018/3/12.
// 查找学生信息
// https://www.nowcoder.com/practice/fe8bff0750c8448081759f3ee0d86bb4?tpId=60&tqId=29499&rp=0&ru=%2Fkaoyan%2Fretest%2F1001&qru=%2Fta%2Ftsing-kaoyan%2Fquestion-ranking&tPage=2
//

#include <iostream>
#include <algorithm>
#include <map>

#define MAX_SIZE 1010

using namespace std;

//void function1(int n) {
//    int m;
//    string num, name, sex, age;
//    map<string, string> students;
//    students.clear();
//    for (int i = 0; i < n; i++) {
//        cin >> num >> name >> sex >> age;
//        students[num] = num + " " + name + " " + sex + " " + age;
//    }
//    cin >> m;
//    for (int i = 0; i < m; i++) {
//        cin >> num;
//        if (students[num] != "") {
//            cout << students[num] << endl;
//        } else {
//            cout << "No Answer!" << endl;
//        }
//    }
//}

typedef struct Student {
    string num;
    string name;
    string sex;
    string age;
} Student;

bool comp(Student a, Student b) {
    return a.num < b.num;
}

void function2(int n) {
    int m;
    string num;
    Student students[MAX_SIZE];
    for (int i = 0; i < n; i++) {
        cin >> students[i].num >> students[i].name >> students[i].sex >> students[i].age;
    }
    sort(students, students + n, comp);
    cin >> m;
    for (int i = 0; i < m; i++) {
        int lo, hi, mid;
        cin >> num;
        lo = 0;
        hi = n;
        while (lo < hi) {
            mid = (lo + hi) / 2;
            if (students[mid].num < num) {
                lo = mid + 1;
            } else if (students[mid].num > num) {
                hi = mid;
            } else {
                cout << students[mid].num << " " << students[mid].name
                     << " " << students[mid].sex << " " << students[mid].age << endl;
                break;
            }
        }
        if (lo >= hi) {
            cout << "No Answer!" << endl;
        }
    }
}


int main () {
    int n;

    while (cin >> n) {
        //function1(n);
        function2(n);
    }
    return 0;
}

