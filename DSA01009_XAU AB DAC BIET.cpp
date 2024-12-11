#include<bits/stdc++.h>

using namespace std;

int n, ok, k;
string s;

void sinh(){
    int i = s.length() - 1;
    while(i >= 0 && s[i] == 'B'){
        s[i] = 'A';
        --i;
    }
    if(i < 0) ok = 0;
    else s[i] = 'B';
}

bool check(string s, int k) {
    string q = string(k, 'A'); 
    int pos = s.find(q);
    if (pos != string::npos) {
        if ((pos + k == s.length()) || s[pos + k] == 'B') {
            return true;
        }
    }
    return false;
}

int main(){
    cin >> n >> k;
    s = string(n, 'A');
    ok = 1;
    vector<string> v;
    while(ok){
        string res = "";
        if(check(s, k)){
           res += s;
           v.push_back(res);
        }
        sinh();
    }
    cout << v.size() << endl;
    for(string x : v){
        cout << x << endl;
    }
}