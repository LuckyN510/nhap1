#include<bits/stdc++.h>

using namespace std;
using ll = long long;

vector<ll> v;

void ktao(){
    queue<ll> q;
    q.push(1);
    while(true){
        ll tmp = q.front(); q.pop();
        if(tmp >= 1e18){
            break;
        }
        v.push_back(tmp);
        q.push(tmp * 10 + 0);
        q.push(tmp * 10 + 1);
    }
}

int solve(ll n){
    int cnt = 0;
    for(ll x : v){
        if(x <= n){
            ++cnt;
        }
        else break;
    }
    return cnt;
}

int main(){
    int t; cin >> t;
    ktao();
    while(t--){
        ll n; cin >> n;
        cout << solve(n) << endl;
    }
}