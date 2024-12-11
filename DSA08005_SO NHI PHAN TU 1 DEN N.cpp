#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        queue<string> q;
        q.push("1");
        vector<string> v;
        while(v.size() < n){
            string tmp = q.front(); q.pop();
            v.push_back(tmp);
            q.push(tmp + '0');
            q.push(tmp + '1');
        }
        for(string x : v){
            cout << x << " ";
        }
        cout << endl;
    }
}