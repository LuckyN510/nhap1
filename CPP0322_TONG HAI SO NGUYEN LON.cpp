#include <bits/stdc++.h>

using namespace std;

void add(string a, string b)
{
    int n1 = a.length(), n2 = b.length();
    int max_len = max(n1, n2);
    vector<int> x(max_len, 0), y(max_len, 0), z(max_len + 1, 0);

    for (int i = 0; i < n1; i++) x[i] = a[n1 - 1 - i] - '0';
    for (int i = 0; i < n2; i++) y[i] = b[n2 - 1 - i] - '0';

    int carry = 0;
    for (int i = 0; i < max_len; i++) 
    {
        int tmp = x[i] + y[i] + carry;
        z[i] = tmp % 10;
        carry = tmp / 10;
    }
    if (carry) z[max_len] = carry;

    bool leadingZero = true;
    for (int i = max_len; i >= 0; i--) 
    {
        if (z[i] == 0 && leadingZero) continue;
        leadingZero = false;
        cout << z[i];
    }

    if (leadingZero) cout << "0"; 
}

int main() 
{
    int t; cin >> t;
    cin.ignore();
    while (t--) 
    {
        string a, b; cin >> a >> b;
        if (a.length() >= b.length()) add(a, b);
        else add(b, a);
        cout << endl;
    }
}