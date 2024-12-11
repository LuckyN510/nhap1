#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m, k; cin >> n >> m >> k;
        int a[n], b[m], c[k];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < m; i++){
            cin >> b[i];
        }
        for(int i = 0; i < k; i++){
            cin >> c[i];
        }
        bool check = 0;
        int idx1 = 0, idx2 = 0, idx3 = 0;
        while(idx1 < n && idx2 < m && idx3 < k){
            if(a[idx1] == b[idx2] && a[idx1] == c[idx3]){
                cout << a[idx1] << " ";
                check = 1;
                ++idx1;
                ++idx2;
                ++idx3;
            }
            else if(a[idx1] < b[idx2]) ++idx1;
            else if(b[idx2] < c[idx3]) ++idx2;
            else ++idx3;
        }
        if(!check) cout << "NO";
        cout << endl;
    }
}