#include<bits/stdc++.h>

using namespace std;

string soNhoNhat(int s, int d){
    string res = string(d, '0');
    for(int i = d - 1; i >= 0; i--){
        if(s > 9){
            res[i] = '9';
            s -= 9; 
        }
        else{
            if(i != 0){
                res[0] = '1';
                res[i] += s - 1;
            }
            else if(i == 0){
                res[i] += s;
            }
            return res;
        }
    }
    return res;
}

int main(){
    int t; cin >> t;
    while(t--){
        int s, d;
        cin >> s >> d;
        if(s == 0 && d > 1) cout << -1;
        if(d * 9 < s) cout <<  -1;
        else cout << soNhoNhat(s, d);
        cout << endl;
    }
}
