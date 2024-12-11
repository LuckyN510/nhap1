#include<bits/stdc++.h>

using namespace std;

int n, a[1001], ok;

void init(){
    for(int i = 1; i <= n; i++){
        a[i] = i;
    }
}

void sinh(){
    int i = n;
    while(i >= 1 && a[i] > a[i + 1]){
        --i;
    }
    if(i == 0) ok = 0;
    else{
        int j = n;
        while(a[i] > a[j]) --j;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
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
                res += to_string(a[i]);
            }
            res += " ";
            v.push_back(res);
            sinh();
        }
        for(int i = v.size() - 1; i >= 0; i--){
            cout << v[i];
        }
        cout << endl;
    }
}