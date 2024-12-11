#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int sum; cin >> sum;
        int d4 = -1, d7 = -1; 
        for (int j = 0; j <= sum / 4; j++){
            if ((sum - 4 * j) % 7 == 0){
                d4 = j;
                d7 = (sum - 4 * j) / 7;
                break;
            }
        }
        
        if (d4 != -1 && d7 != -1){
            for (int i = 0; i < d4; i++){
                cout << "4";
            }
            for (int i = 0; i < d7; i++){
                cout << "7";
            }
            cout << endl;
        } 
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}
