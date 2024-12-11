#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n];
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            pq.push((a[i]));
        }
        long long res = 0;
        while(pq.size() > 1){
            int u1 = pq.top(); pq.pop();
            int u2 = pq.top(); pq.pop();
            pq.push(u1 + u2);
            res += u1 + u2;
        }    
        cout << res << endl;
    }
}