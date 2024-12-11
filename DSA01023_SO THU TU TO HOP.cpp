#include <bits/stdc++.h>
using namespace std;

int n, k, x[1001], a[1001], cnt = 0;

void in(){
    ++cnt;  
    vector<int> v;  
    for (int i = 1; i <= k; i++){
        v.push_back(x[i]);  
    }
    bool check = true;
    for (int i = 1; i <= k; i++){
        if (a[i] != v[i - 1]){ 
            check = false;
            break;
        }
    }
    if(check){
        cout << cnt << endl;  
    }
}

void Try(int i){
    for (int j = x[i - 1] + 1; j <= n - k + i; j++){
        x[i] = j;
        if (i == k){
            in();
        } 
        else{
            Try(i + 1);
        }
    }
}

int main(){
    int t; cin >> t;
    while (t--){
        cnt = 0; 
        cin >> n >> k;
        for (int i = 1; i <= k; i++){
            cin >> a[i]; 
        }
        Try(1); 
    }
    return 0;
}
