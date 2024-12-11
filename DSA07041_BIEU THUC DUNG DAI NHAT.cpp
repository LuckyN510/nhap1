#include<bits/stdc++.h>

using namespace std;

void solve(string s){
    stack<char> st;
    int res = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == '('){
            st.push(s[i]);
        }
        else{
            if(!st.empty() && st.top() == '('){
                st.pop();
                res += 2;
            }
            else{
                st.push(s[i]);
           }
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