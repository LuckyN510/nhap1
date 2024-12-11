#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int n;
    stack<int> st; 
    cin.ignore();
    while(cin >> s){
        if(s == "push"){
            cin >> n;
            st.push(n);
        }
        else if(s == "show"){
            if(st.empty()){
                cout << "empty" << endl;
            }
            else{
                while(!st.empty()){
                    cout << st.top() << " ";
                    st.push()
                    st.pop();
                }
            }
        }
        else if(s == "pop" && !st.empty()){
            st.pop();
        }
    }
}