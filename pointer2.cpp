#include <bits/stdc++.h>

using namespace std;

int main() {
    int a = 15;
    int *p = &a;
    int **pp = &p;

    cout << *p << endl;
    cout << **pp << endl;
    cout << &a << endl;
    cout << *pp << endl;
    cout << &p << endl;
    cout << pp << endl;

    return 0;
}