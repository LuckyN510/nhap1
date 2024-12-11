#include<bits/stdc++.h>

using namespace std;

int x[10], a[9][9], cot[9], d1[18], d2[18], n = 8;
int sum = 0;
int maxValue = 0;

void in(){
    sum = 0;  
    for(int i = 1; i <= n; i++){
        sum += a[i][x[i]];  
    }
    maxValue = max(sum, maxValue);  
}

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(cot[j] && d1[i - j + n] && d2[i + j - 1]){  
            x[i] = j;
            cot[j] = d1[i - j + n] = d2[i + j - 1] = 0; 
            if(i == n){
                in();
            }
            else
                Try(i + 1);
                cot[j] = d1[i - j + n] = d2[i + j - 1] = 1;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> a[i][j];
            }
        }
        for(int i = 1; i <= n; i++){
            cot[i] = 1;
        }
        for(int i = 1; i <= 2 * n; i++){
            d1[i] = d2[i] = 1;
        }
        maxValue = 0;
        Try(1); 
        cout << maxValue << endl;  
    }    
}
