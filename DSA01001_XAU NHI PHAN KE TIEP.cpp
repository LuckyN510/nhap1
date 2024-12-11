#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int index = s.length() - 1;
        while(s[index] == '1'){
            s[index] = '0';
            --index;
        }
        if(index >= 0){
            s[index] = '1';
        }
        cout << s << endl;
    }
}