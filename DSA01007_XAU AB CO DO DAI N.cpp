#include<bits/stdc++.h>

using namespace std;

int n, a[1001], ok;

void init(){
    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }
}

void sinh(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        --i;
    }
    if(i == 0) ok = 0;
    else a[i] = 1;
} 

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        ok = 1;
        init();
        vector<string> v;
        while(ok){
            string res = "";
            for(int i = 1; i <= n; i++){
                if(a[i] == 1) res += 'B';
                else res += 'A';
            }
            res += " ";
            v.push_back(res);
            sinh();
        }
        for(string x : v){
            cout << x;
        }
        cout << endl;
    }
}