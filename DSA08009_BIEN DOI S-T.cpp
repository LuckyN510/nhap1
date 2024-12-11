#include<bits/stdc++.h>

using namespace std;

int solve(int s, int t){
    queue<pair<int, int>> q;
    q.push({s, 0});
    set<int> se;
    se.insert(s);
    while(!q.empty()){
        pair<int, int> tmp = q.front(); q.pop();
        if(tmp.first == t){
            return tmp.second;
        }
        if(tmp.first > 1 && se.count(tmp.first - 1) == 0){
            q.push({tmp.first - 1, tmp.second + 1});
            se.insert(tmp.first - 1);
        }
        if(tmp.first < t && se.count(tmp.first * 2) == 0){
            q.push({tmp.first * 2, tmp.second + 1});
            se.insert(tmp.first * 2);
        }
    }
    return -1;
}


int main(){
    int t; cin >> t;
    while(t--){
        pair<int, int> v;
        int s, t;
        cin >> s >> t;     
        cout << solve(s, t) << endl;
    }
}