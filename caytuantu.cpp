#include <iostream>
using namespace std;

#define MAX 100

int tree[MAX];
int n = 0;

bool emptytree() {
    return n == 0;
}

void insertNode(int x) {
    if (n < MAX) {
        tree[n++] = x;
    }
}

void duyetTruoc(int i) {
    if (i >= n) return;
    cout << tree[i] << " ";
    duyetTruoc(2 * i + 1);
    duyetTruoc(2 * i + 2);
}

void duyetGiua(int i) {
    if (i >= n) return;
    duyetGiua(2 * i + 1);
    cout << tree[i] << " ";
    duyetGiua(2 * i + 2);
}

void duyetSau(int i) {
    if (i >= n) return;
    duyetSau(2 * i + 1);
    duyetSau(2 * i + 2);
    cout << tree[i] << " ";
}

int main() {
    insertNode(1);
    insertNode(2);
    insertNode(3);
    insertNode(4);
    insertNode(5);

    cout << "Duyet truoc: ";
    duyetTruoc(0);

    cout << "\nDuyet giua: ";
    duyetGiua(0);

    cout << "\nDuyet sau: ";
    duyetSau(0);

    return 0;
}