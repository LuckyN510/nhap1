#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int k; cin >> k;
        string s; cin >> s;
        do{
            cout << s << endl;
        }while(next_permutation(s.begin(), s.end()));
    }
}