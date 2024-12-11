#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t; 
    while (t--){
        int n, k; cin >> n >> k;
        vector<int> a(k + 1), b(k + 1), c(101);
        int cnt = 1;
        for (int i = 1; i <= k; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        int index = k;
        while (index >= 1 && a[index] == n - k + index){
            --index;
        }
        if(index == 0){
            cout << k << endl;
            continue;
        } 
        else{
            a[index]++;
            for (int j = index + 1; j <= k; j++){
                a[j] = a[j - 1] + 1;
            }
            for (int j = 1; j <= k; j++){
                c[cnt] = a[j];
                cnt++;
            }
        }

        int dem = 0;
        for (int i = 1; i < cnt; i++){
            for (int j = 1; j <= k; j++){
                if (c[i] == b[j]){
                    ++dem;
                }
            }
        }
        cout << k - dem << endl;
    }
}
