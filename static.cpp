#include<bits/stdc++.h>

using namespace std;

void func() {
    static int x=0;
    x++;
    cout << x << endl;
}

int main() {
    func(); // 
    func(); //
    func();
    func();
    return 0;
}

//  1 2 3