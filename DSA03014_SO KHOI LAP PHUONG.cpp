#include<bits/stdc++.h>

using namespace std;

vector<long long> v;

string check(string n){
    string a;
    for(int i = 0; i < v.size(); i++){
        int idx = 0;
        a = to_string(v[i]);
        for(int j = 0; j < n.length(); j++){
            if(a[idx] == n[j]) ++idx;
        }
        if(idx == a.length()){
            return a;
        }
    }
    return to_string(-1);
}

int main(){
    for(int i = 1e2; i >= 1; i--) {
        v.push_back(i * i * i);
    }
    int t; cin >> t;
    while(t--){
        string n; cin >> n;
        cout << check(n) << endl;
    }
}