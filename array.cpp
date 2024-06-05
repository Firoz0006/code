#include<bits/stdc++.h>

using namespace std;

void Array2D() {
    vector<vector<int>> vec(10, vector<int>(10));

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            vec[i][j] = i * 10 + j;
        }
    }

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
}

void Array1D() {
    vector<int> vec(10);
    for(int i = 0; i < 10; i++) {
        vec[i] = i + 1;
    }

    for(int i = 0; i < 10; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main() {
    Array1D();
    Array2D();
    return 0;
}