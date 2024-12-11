#include<bits/stdc++.h>

using namespace std;

void solve(string &s){
    stack<int> st;
    int res = -1;
    st.push(-1);
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '('){
            st.push(i);
        }
        else if(s[i] == ')'){
            st.pop();
            if(st.empty()){
                st.push(i);
            }
            res = max(res, i - st.top());

        }
    }
    cout << res << endl;
}   

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        solve(s);
    }
}