#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n], R[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        stack<int> st;
        for(int i = 0; i < n; i++){
            while(!st.empty() && a[i] >= a[st.top()]){
                st.pop();
            }
            if(st.empty()) R[i] = i + 1;
            else R[i] = i - st.top() ;
            st.push(i);
        }
        for(int i = 0; i <   n; i++){
            cout << R[i] << " ";
        }
        cout << endl;
    }
}