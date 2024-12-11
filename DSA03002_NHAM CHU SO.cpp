#include<bits/stdc++.h>

using namespace std;

int convert(string s, char a, char b){
    for(int i = 0; i < s.length(); i++){
        if(s[i] == a){
            s[i] = b;
        }
    }
    return stoi(s);
}

int main(){
    string n, m; cin >> n >> m;
    cout <<  convert(n, '6', '5') + convert(m, '6', '5') << " ";
    cout <<  convert(n, '5', '6') + convert(m, '5', '6') << endl;
}