#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        ll a[n + 1];
        int d[n] = {0};
        for(int i = 1; i <= n; i++) 
        {
            cin >> a[i];
            if(a[i] > 0 && a[i] < n)
            {
                d[a[i]] = 1;
            }
        }
        for(int i = 0; i < n; i++)
        {
			if(d[i] > 0) cout << i <<" ";
			else cout << -1 << " ";
		}
        cout << endl;
    }
}