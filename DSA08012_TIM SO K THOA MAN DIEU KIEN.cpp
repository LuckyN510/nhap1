#include<bits/stdc++.h>

using namespace std;


bool allUnique(string &s) {
    set<char> unique_chars(s.begin(), s.end());
    return unique_chars.size() == s.size();
}

vector<string> v;
void ktao(){
    queue<string> q;
    q.push("1");
    q.push("2");
    q.push("3");
    q.push("4");
    q.push("5");
    while(!q.empty()){
        string tmp = q.front(); q.pop();
        if(tmp.length() > 5){
            break;
        }
        if(allUnique(tmp)){
            v.push_back(tmp);
        }
        for(int i = 0; i <= 5; i++){
            q.push(tmp + to_string(i));
        }
    }
    
}

int main(){
    ktao();
    int t; cin >> t;
    while(t--){
        int l, r; cin >> l >> r;
        int cnt = 0;
        for(string x : v){
            if(stoi(x) >= l && stoi(x) <= r){
                ++cnt;
            } 
        }
        cout << cnt << endl;
    }
    
}