#include<bits/stdc++.h>

using namespace std;

int n, s; 

string lonNhat(int s, int n){
    string res = string(n, '0');
    for(int i = 0; i < n; i++){
        if(s >= 9){
            res[i] = '9';
            s -= 9;
        }
        else{
            res[i] = s + '0';
            return res;
        }
    }
    return res;
}

string nhoNhat(int s, int n){
    string res = string(n, '0');
    for(int i = n - 1; i >= 0; i--){
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
    cin >> n >> s;
    if(s == 0 || s > 9 * n){
        cout << "-1" << " " << "-1" << endl;
    } 
    else{
        cout << nhoNhat(s, n) << " " << lonNhat(s, n) << endl;
    }
}