#include <bits/stdc++.h>
using namespace std;

int pre(char c){
    if (c == '^') return 5;
    if (c == '*' || c == '/') return 4;
    if (c == '+' || c == '-') return 3;
    return 2;
}

void solve(string s){
    stack<char> st;
    string res = "";
    for (int i = 0; i < s.length(); i++){
        if (isalpha(s[i])){
            res += s[i];
        }
        else if (s[i] == '('){
            st.push(s[i]);
        }
        else if (s[i] == ')'){
            while (!st.empty() && st.top() != '('){
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^'){
            while (!st.empty() && pre(st.top()) >= pre(s[i])){
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while (!st.empty()){
        if (st.top() != '('){ 
            res += st.top();
        }
        st.pop();
    }
    cout << res << endl;
}

int main(){
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        solve(s);
    }
}
