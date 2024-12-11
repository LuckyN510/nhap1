#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    int cntX = 0, cntT = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'X'){
            ++cntX;
        }
        else if(s[i] == 'T'){
            ++cntT;
        }
    }
    int res = 0;
    for(int i = 0; i < cntX; i++){
        if(s[i] == 'T'){
            int pos = cntX;
            while(s[pos] != 'X'){
                ++pos;
            }
            swap(s[i], s[pos]);
            ++res;
        }
        else if(s[i] == 'D'){
            int pos = n - 1;
            while(s[pos] != 'X'){
                pos--;
            }
            swap(s[i], s[pos]);
            ++res;
        }
    }

    for (int i = cntX; i < cntX + cntT; i++){
        if (s[i] != 'T'){
            int pos = cntX + cntT;
            while (s[pos] != 'T'){
                ++pos;
            }
            swap(s[i], s[pos]);
            ++res;
        }
    }
    cout << res;
}