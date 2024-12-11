#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        string t = s;
        sort(t.begin(), t.end());
        next_permutation(s.begin(), s.end());
        if(s == t){
            cout << n << " " << "BIGGEST" << endl;
        }
        else cout << n << " " << s << endl;
    }
}