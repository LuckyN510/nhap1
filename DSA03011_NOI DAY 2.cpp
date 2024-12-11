#include<bits/stdc++.h>

using namespace std;
using ll = long long;

const ll MOD = 1e9 + 7;

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll a[n];
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            pq.push(a[i]);
        }
        ll res = 0;
        while(pq.size() > 1){
            ll u1 = pq.top(); pq.pop();
            ll u2 = pq.top(); pq.pop();
            pq.push((u1 + u2) % MOD);
            res += u1 + u2; 
            res %= MOD;

        } 
        cout << res << endl;
    }
}