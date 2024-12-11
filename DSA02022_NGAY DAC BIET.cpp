#include<bits/stdc++.h>
using namespace std;

int n, ok;
string s = "2000";
vector<string> date, year;

void sinh(){
    int i = 3; 
    while(i >= 0 && s[i] == '2'){
        s[i] = '0';
        --i;
    }
    if(i < 0) ok = 0; 
    else s[i] = '2';
}

int main(){
    s = "2000";
    ok = 1;
    while(ok){
        year.push_back(s);
        sinh();           
    }
    date.push_back("02");
    date.push_back("20");
    date.push_back("22");
    for(int i = 0; i < date.size(); i++){
        for(int j = 0; j < year.size(); j++){
            cout << date[i] << "/02/" << year[j] << endl;
        }
    }
}
