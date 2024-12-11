#include<bits/stdc++.h>

using namespace std;

int bfs(int n){
    queue<pair<int, int>> q;
    q.push({n, 0});
    set<int> se;
    se.insert(n);
    while(!q.empty()){
        pair<int, int> tmp = q.front(); q.pop();
        if(tmp.first == 1){
            return tmp.second;
        }
        if(tmp.first >= 0 && se.count(tmp.first - 1) == 0){
            q.push({tmp.first - 1, tmp.second + 1});
            se.insert(tmp.first - 1);
        }
        int n = tmp.first;
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                int u = i, v = n / i;
                int x = max(u, v);
                if(se.count(x) == 0){
                    q.push({x, tmp.second + 1});
                    se.insert(x);
                }
            }
        }
    }
    return -1;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << bfs(n) << endl;
    }
}