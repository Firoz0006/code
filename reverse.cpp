#include<bits/stdc++.h>

using namespace std;
int main() {
    vector<char> vec(26);
    for(int i=0;i<26;i++) {
        char ch='a'+i;
        vec[i] = ch;
    }
    
    vector<char> res(26);
    for(int i=25;i>=0;i--){
        res[26-i-1] = vec[i];
    }

    for(char ch : res) {
        cout << ch << " ";
    }

    cout << endl;

    return 0;
}

