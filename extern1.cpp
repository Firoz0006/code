#include<iostream>
#include"extern2.cpp"

using namespace std;

extern int a;

int main() {
    cout << a << endl;
    return 0;
}