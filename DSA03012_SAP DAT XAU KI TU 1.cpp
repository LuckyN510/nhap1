#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int d[256] = {0};
        int maxFre = 0;
        for(int i = 0; i < s.length(); i++){
            d[s[i]]++;
            maxFre = max(maxFre, d[s[i]]);
        }
        //maxFre <= số khoảng trống thì sẽ sắp xếp đc
        if(maxFre <= s.length() - maxFre && s.length() % 2 == 0) cout << "1" << endl;
        else if(maxFre <= (s.length() / 2 + 1) && s.length() % 2 == 1) cout << "1" << endl;
        else cout << "-1" << endl;
    }
}