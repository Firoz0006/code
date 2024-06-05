#include<bits/stdc++.h>

using namespace std;

void func1(int a) {
    a += 5;
    cout << "value of a = " << a << endl;
}

void func2(int&  c) {
    c += 5;
    cout << "value of a = " << c << endl;
}

void func3(int *c) {
    *c += 5;
    cout << "value of a = " << *c << endl;
}

int main() {
    int a = 10;
    func1(a);
    cout << "after function call value of a = " << a << endl;
    func2(a);
    cout << "after function call value of a = " << a << endl;
    func3(&a);
    return 0;
}