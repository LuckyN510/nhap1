#include<bits/stdc++.h>

using namespace std;

int n, k, x[1001], a[1001], s = 0, cnt = 0, check = 0;

void in(){
    ++cnt;
    if(cnt == k){
        check = 1;
    }
    
}

void Try(int i, int pos, int sum){
    if(check){
        return;
    }
    for(int j = pos; j <= n; j++){
        if(sum + a[j] <= s){
            x[i] = a[j];
            if(sum + a[j] == s){
                in();
            }
            else{
                Try(i + 1, j + 1, sum + a[j]);  
            }
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        s = 0;
        cnt = 0;
        check = 0;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            s += a[i];
        }
        if(s % k != 0){
            cout << "0" << endl;
            continue;
        }
        s /= k;
        sort(a + 1, a + n + 1, greater<>());
        Try(1, 1, 0);
        if(check) cout << "1" << endl;
        else cout << "0" << endl;
    }
}