#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int k; cin >> k; 
        string s; cin >> s;
        map<char, int> mp;
        priority_queue<int> pq;
        for(int i = 0; i < s.length(); i++){
            mp[s[i]]++;
        }
        for(auto x : mp){
            pq.push(x.second);
        }
        while(k--){
            if(!pq.empty()){
                int u = pq.top(); pq.pop();
                u--;
                pq.push(u);
            }
        }
        long long res = 0;
        while(!pq.empty()){
            int tmp = pq.top(); pq.pop();
            res += 1ll * tmp * tmp;
        }
        cout << res << endl;
    }
}