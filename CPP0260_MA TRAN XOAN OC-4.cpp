#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n; cin >> n;
    int a[n * n];
    for(int i = 0; i < n * n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n * n);
    int b[n][n], cnt = 0;
    int c1 = 0, c2 = n - 1, h1 = 0, h2 = n - 1;
    while (c1 <= c2 && h1 <= h2) 
    {
        for (int i = c1; i <= c2; i++) 
        {
            b[h1][i] = a[cnt++];
        }
        ++h1;
        for (int i = h1; i <= h2; i++)             
        {
            b[i][c2] = a[cnt++];
        }
        --c2;
        if (h1 <= h2)             
        {
            for (int i = c2; i >= c1; i--) 
            {
                b[h2][i] = a[cnt++];
            }
            --h2;
        }
        if (c1 <= c2) 
        {
            for (int i = h2; i >= h1; i--) 
            {
                b[i][c1] = a[cnt++];
            }
            ++c1;
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << b[i][j] << ' ';
        }
        cout << endl;
    }
}
