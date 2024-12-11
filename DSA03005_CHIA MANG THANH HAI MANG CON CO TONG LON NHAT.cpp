#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int a[n];
        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        int min_pos = min(k, n - k);
        for(int i = 0; i < n; i++){
            if(i < min_pos){
                sum1 += a[i];
            }
            else{
                sum2 += a[i];
            }
        }
        cout << abs(sum1 - sum2) << endl;
    }
}