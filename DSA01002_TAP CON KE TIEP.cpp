#include<bits/stdc++.h>

using namespace std;
int n, k, a[1001];

void sinh(){
    int i = k; 
    while(i >= 1 && a[i] == n - k + i){
        --i;
    }
    if(i == 0){
        for(int j = 1; j <= k; j++){
            cout << j << " ";
        }
    }
    else{
        a[i]++;
        for(int j = i + 1; j <= k; j++){
            a[j] = a[j - 1] + 1;
        }
        for(int j = 1; j <= k; j++){
            cout << a[j] << " ";
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        
        for(int i = 1; i <= k; i++) {
            cin >> a[i];
        }
        sinh();
        cout << endl;
    }
}