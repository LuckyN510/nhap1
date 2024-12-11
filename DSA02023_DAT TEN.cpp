#include<bits/stdc++.h>

using namespace std;
int n, k, x[101];
vector<string> b;

bool used[101];

void in(){
    for(int i = 1; i <= k; i++){
        cout << b[x[i] - 1] << " ";
    }
    cout << endl;
}

void Try(int i){
    for(int j = x[i - 1] + 1; j <= b.size() - k + i; j++){
        x[i] = j;
        if(i == k){
            in();
        } 
        else
            Try(i + 1);
    }
}

int main(){
    cin >> n >> k;
    set<string> se;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        se.insert(s);
    }
    for(string x : se){
        b.push_back(x);
    }
    Try(1);
    
}