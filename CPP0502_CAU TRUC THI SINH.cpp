#include<bits/stdc++.h>

using namespace std;

struct ThiSinh
{
    string name;
    string date;
    double mon1, mon2, mon3, total;
};

void nhap(ThiSinh &A)
{
    getline(cin, A.name);
    getline(cin, A.date);
    cin >> A.mon1 >> A.mon2 >> A.mon3;
    A.total = A.mon1 + A.mon2 + A.mon3;
}

void in(ThiSinh &A)
{
    cout << A.name << " " << A.date << " " << fixed << setprecision(1) << A.total;
}

int main()
{
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}