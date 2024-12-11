#include<bits/stdc++.h>

using namespace std;

int n, a[10001], x[10001], b[10001], idx = 0;
bool used[10001];

void in(){
    for(int i = 1; i <= n; i++){
        cout << b[x[i]] << " ";
    }
    cout << endl;
}

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(used[j] == false){
            x[i] = j;
            used[j] = true;
            if(i == n){
                in();
            }
            else
                Try(i + 1);
                used[j] = false;
        }
    }
}
int main(){
    cin >> n;
    set<int> se;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        se.insert(a[i]);
    }
    for(int x : se){
        b[++idx] = x;
    }
    Try(1);
}