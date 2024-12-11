#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s; cin >> s;
        s.push_back('I');
        stack<int> st;
        st.push(-1);
        int maxcur = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'I'){
                int cnt = i - st.top();
                st.pop();
                st.push(i);
                maxcur += cnt;
                for(int j = maxcur; j > maxcur - cnt; j--){
                    cout << j;
                }
            }
        }
        cout << endl;
    }
}