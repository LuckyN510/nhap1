#include<bits/stdc++.h>

using namespace std;

int n, ok;
vector<int> a, b;

void init(){
    a.resize(n + 1);
    for(int i = 1; i <= n; i++){
        a[i] = i;
    }
}

void sinh(){
    int i = n - 1;
    while(i >= 1 && a[i] > a[i + 1]){
        --i;
    }
    if(i == 0) ok = 0;
    else{
        int j = n;
        while(a[i] >= a[j]) --j;
        swap(a[i], a[j]);
        reverse(a.begin() + i + 1, a.begin() + n + 1);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        b.resize(n + 1);
        for(int i = 1; i <= n; i++){
            cin >> b[i];
        }
        init();
        ok = 1;
        int cnt = 0, res = 0;
        while(ok){
            cnt++;
            bool check = 1;
            for(int i = 1; i <= n; i++){
                if(a[i] != b[i]){
                    check = 0;
                    break;
                }
            }
            if(check){
                res = cnt;
                break;
            }
            sinh();
        }
        cout << res << endl; 
    }
}