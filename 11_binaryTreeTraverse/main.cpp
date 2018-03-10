//
// Created by Qian Hu on 2018/3/10.
// 二叉树遍历
// https://www.nowcoder.com/practice/4b91205483694f449f94c179883c1fef?tpId=60&tqId=29483&tPage=1&ru=%2Fkaoyan%2Fretest%2F1001&qru=%2Fta%2Ftsing-kaoyan%2Fquestion-ranking
//

#include <iostream>
#include <stack>

using namespace std;

typedef struct BiTreeNode {
    char value;
    BiTreeNode *left, *right;
} BiTreeNode, *BiTree;

BiTree buildTree(string input, int *index) {
    char val = input[(*index)++];
    if (val == '#') {
        return NULL;
    }
    BiTree tree = (BiTree)malloc(sizeof(BiTreeNode));
    tree->value = val;
    tree->left = buildTree(input, index);
    tree->right = buildTree(input, index);
    return tree;
}

void inOrderTraverse(BiTree tree) {
    stack<BiTree> thisStack;
    BiTreeNode *tmp;
    tmp = tree;
    while (!thisStack.empty() || tmp) {
        while (tmp) {
            thisStack.push(tmp);
            tmp = tmp->left;
        }
        tmp = thisStack.top();
        thisStack.pop();
        cout << tmp->value << " ";
        tmp = tmp->right;
    }
}

int main () {
    string input;

    while (cin >> input) {
        int index = 0;
        BiTree tree = buildTree(input, &index);
        inOrderTraverse(tree);
        cout << endl;
    }

    return 0;
}

