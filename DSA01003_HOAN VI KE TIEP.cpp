#include<bits/stdc++.h>

using namespace std;

int n, a[1001];

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        next_permutation(a, a + n);
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}