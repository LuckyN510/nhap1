#include <bits/stdc++.h>

using namespace std;

int a[101], k, n, x[101];
vector<vector<int>> res;

void Try(int i, int pos, int sum) {
    for (int j = pos; j <= n; j++) { 
        if (sum + a[j] <= k) {
            x[i] = a[j];
            if (sum + a[j] == k) {
                vector<int> v;
                for (int l = 1; l <= i; l++) {
                    v.push_back(x[l]);
                }
                res.push_back(v);
            } else {
                Try(i + 1, j + 1, sum + a[j]); 
            }
        }
    }
}

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) { 
        cin >> a[i];
    }
    sort(a + 1, a + n + 1); 
    Try(1, 1, 0); 
    sort(res.begin(), res.end(), greater<>()); 
    for (auto v : res) {  
        for (int x : v) {
            cout << x << " ";
        }
        cout << "\n";
    }
    cout << res.size();
}
