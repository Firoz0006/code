#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *p;
    p = &a;
    cout<< "address of a ="<< &a <<endl;
    cout<< "address of p ="<< &p <<endl;
    cout<< "address of a with p ="<< p <<endl;
    cout << "value of a = " << a << endl;
    cout << "value of a with p = " << *p << endl;
    cout << "value of a with & " << *(&a) << endl;
    return 0;
}