#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return n > 1;
}

int bfs(string s, string t){
    if (s == t) return 0;
    queue<pair<string, int>> q;
    q.push({s, 0});
    set<string> se;
    se.insert(s);
    while (!q.empty()){
        pair<string, int> tmp = q.front(); q.pop();
        if (tmp.first == t){
            return tmp.second;
        }
        string cur = tmp.first;
        for (int i = 0; i < cur.length(); i++){
            char original = cur[i];
            for (char j = '0'; j <= '9'; j++){
                cur[i] = j;
                if (original == j) continue;
                if (cur[0] == '0') continue; 
                if (se.count(cur) == 0 && isPrime(stoi(cur))){
                    q.push({cur, tmp.second + 1});
                    se.insert(cur);
                }
            }
            cur[i] = original;  
        }
    }
    return -1;
}


int main(){
    int t; cin >> t;
    while(t--){
        string s, t; cin >> s >> t;
        cout << bfs(s, t) << endl;
    }
}