#include<bits/stdc++.h>

using namespace std;

int n, a[1001];
vector<vector<int>> res;

void sinh(int n, int a[]){
    if(n < 1){
        return;
    }
    int tmp[n];
    for(int i = 1; i < n; i++){
        tmp[i] = a[i] + a[i + 1];
    }
    sinh(n - 1, tmp);
    vector<int> v;
    for(int i = 1; i <= n; i++){
        v.push_back(a[i]);
    }
    res.push_back(v);
}

int main(){
    int t; cin >> t;
    while(t--){
        res.clear();
        cin >> n; 
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        sinh(n, a);
        for(auto x : res){
            cout << "[";
            for(int j = 0; j < x.size(); j++){
                cout << x[j];
                if(j != x.size() - 1){
                    cout << " ";
                }
            }
            cout << "] ";
        }
        cout << endl;
    }
}