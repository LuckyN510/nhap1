#include<bits/stdc++.h>

using namespace std;

int n, x[1001], ok;
string s;

void sinh(){
   int i = s.length() - 1;
    while (i >= 0 && s[i] == '8')
    {
        s[i] = '6';
        --i;
    }
    if(i < 0) ok = 0;
    else s[i] = '8';
}

bool check(string s)
{
    if(n < 6) return false;
    if (s[0] != '8' || s[n - 1] != '6') 
        return false;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == '8' && s[i - 1] == '8') 
            return false;
        if (i >= 3 && s[i] == '6' && s[i - 1] == '6' && s[i - 2] == '6' && s[i - 3] == '6') 
            return false;
    }
    return true;
}

int main(){
    cin >> n;
    s = string(n, '6');
    ok = 1;
    while(ok){
        if(check(s)){
            cout << s << endl;
        }
        sinh();
    }
}