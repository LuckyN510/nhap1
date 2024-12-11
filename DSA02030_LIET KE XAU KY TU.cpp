#include<bits/stdc++.h>

using namespace std;
char c;
int n, k, x[101];

void in(){
    for(int i = 1; i <= k; i++){
        cout << char(x[i] + 'A' - 1);
    }
    cout << endl;
}

void Try(int i, int pos){
    for(int j = pos; j <= n; j++){
        x[i] = j;
        if(i == k){
            in();
        }
        else Try(i + 1, j);
    }
}

int main(){
    cin >> c >> k;
    n = c - 'A' + 1;;
    cin >> n;
    Try(1, 1);
}