#include<bits/stdc++.h>

using namespace std;

int n, x[11];

void in(int n){
    cout <<"(";
    for(int i = 1; i < n; i++){
        cout << x[i] <<" ";
    }
    cout << x[n] << ")";
}

void Try(int i, int pos, int sum){
    for(int j = pos; j >= 1; j--){
        if(sum + j <= n){
            x[i] = j;
            sum += j;
            if(sum == n){
                in(i);
                cout << " ";
            } 
            else 
                Try(i + 1, j, sum); 
                sum -= j;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        Try(1, n, 0);
        cout << endl;
    }
}