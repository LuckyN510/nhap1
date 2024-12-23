#include<bits/stdc++.h>

using namespace std;

class SinhVien
{
public:
    string msv, name, className, email;
public:
    friend istream &operator >> (istream &in, SinhVien &a)
    {
        scanf("\n");
        getline(in, a.msv);
        getline(in, a.name);
        getline(in, a.className);
        getline(in, a.email);
        return in;  
    }
    friend ostream &operator << (ostream &out, SinhVien &a)
    {
        out << a.msv << ' ' << a.name << ' ' << a.className << ' ' << a.email << endl;
        return out; 
    }
};

int main()
{
    SinhVien ds[1001];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> ds[i];
    }

    int q; 
    cin >> q;
    while(q--)
    {
        string s; 
        cin >> s;
        cout << "DANH SACH SINH VIEN LOP " << s << ":" << endl;
        for(int i = 0; i < n; i++)
        {
            if(ds[i].className == s)
            {
                cout << ds[i];
            }
        }
        cout << endl;
    }
    return 0;
}
