#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int k; cin >> k;
        string s; cin >> s;
        priority_queue<int> pq;
        int dem[256] = {0};
        for(int i = 0; i < s.length(); i++){
            dem[s[i]]++;
        }
        for(int i = 0; i < 256; i++){
            if(dem[i]){
                pq.push(dem[i]);
            }
        }
        while(k--){
            int tmp = pq.top(); pq.pop();
            if(tmp - 1 > 0){
                pq.push(tmp - 1);
            }
        }
        long long res = 0;
        while(!pq.empty()){
            int u = pq.top();
            pq.pop();
            res += 1ll * u * u;
        }
        cout << res << endl;
    }
}