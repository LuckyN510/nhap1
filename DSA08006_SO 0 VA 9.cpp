#include<bits/stdc++.h>

using namespace std;
// cho n <= 100
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        queue<string> q;
        q.push("9");
        vector<string> v;
        while(v.size() < n){
            string tmp = q.front(); q.pop();
            if (stoll(tmp) % n == 0) {
                cout << tmp << endl;
                break;
            }
            q.push(tmp + "0");
            q.push(tmp + "9");
        }
    }
}