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
bool check(){
    if(a[1] == 0) return false;  
    if(a[n] == 1) return false;  
    for(int i = 1; i < n; i++) {
        if(a[i] == 1 && a[i + 1] == 1){ 
            return false;
        }
    }
    return true;
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        init();
        ok = 1;
        vector<string> v;
        while(ok){
            string res = "";
            if(check()){
                for(int i = 1; i <= n; i++){
                    if(a[i] == 1) res += 'H';
                    else res += 'A';
                }
                v.push_back(res);
            }
            sinh();
        }
        for(string x : v){
            cout << x << endl;
        }
        cout << endl;
    }
}