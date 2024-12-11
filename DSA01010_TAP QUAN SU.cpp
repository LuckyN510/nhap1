#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int a[k + 1], b[k + 1];
        int c[k + 1], cnt = 0;
        int dem = 0;
        for(int i = 1; i <= k; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        int idx = k;
        while(idx >= 1 && a[idx] == n - k + idx){
            --idx;
        }
        if(idx == 0){
            cout << k << endl;
            continue;
        }
        else{
            a[idx]++;
            for(int j = idx + 1; j <= k; j++){
                a[j] = a[j - 1] + 1;
            }
            for(int j = 1; j <= k; j++){
                c[++cnt] = a[j];
            }
        }
        for(int i = 1; i <= k; i++){
            for(int j = 1; j <= k; j++){
                if(c[i] == b[j]){
                    ++dem;
                }
            }
        }
        cout << k - dem << endl;
    }
}