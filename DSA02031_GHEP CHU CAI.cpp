#include<bits/stdc++.h>

using namespace std;
char c; 
int n, x[101];
bool used[101];
vector<string> v;

bool check(string s){
    for(int i = 1; i < s.length() - 1; i++){
        if(s[i] == 'A' || s[i] == 'E'){
            if(s[i - 1] != 'A' && s[i - 1] != 'E' && s[i + 1] != 'A' && s[i + 1] != 'E'){
                return 0;
            }
        }
    }
    return 1;
}

void in(){
    string s = "";
    for(int i = 1; i <= n; i++){
        s += char(x[i] + 'A' - 1);
    }
    if(check(s)){
        v.push_back(s);
    }
}

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(!used[j]){
            x[i] = j;
            used[j] = 1;
            if(i == n){
                in();
            }
            else
                Try(i + 1);
                used[j] = 0;
        }
    }
}

int main(){
    cin >> c;
    n = c - 'A' + 1;
    Try(1);
    for(string x : v){
        cout << x << endl;
    }
}