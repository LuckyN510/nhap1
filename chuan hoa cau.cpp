#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, res = "";
    vector<string> v;
    while (getline(cin, s)) {
        for (char &c : s) {
            if (c == '.' || c == '!' || c == '?') {
                res += c;  
                stringstream ss(res);
                string word, tmp = "";
                while (ss >> word) {
                    tmp += word + " ";
                }
                tmp.pop_back(); 
                tmp[0] = toupper(tmp[0]); 
                v.push_back(tmp);

                res= ""; 
            } else {
                
                res += tolower(c);
            }
        }
        if (!res.empty()) {
            stringstream ss(res);
            string word, tmp = "";
            while (ss >> word) {
                tmp += word + " ";
            }
            tmp.pop_back(); 
            tmp+=".";
            tmp[0] = toupper(tmp[0]); 
            v.push_back(tmp);
            res="";
        }
    }
    for (string x:v) {
        cout << x << endl;
    }
    return 0;
}