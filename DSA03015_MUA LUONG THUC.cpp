#include<bits/stdc++.h>

using namespace std;

// N : số đơn vị lương thực nhiều nhất bạn có thể mua trong ngày.
// S : số lượng ngày bạn cần được sử dụng lương thực để tồn tại.
// M : số đơn vị lương thực cần có mỗi ngày để bạn tồn tại.

int main(){
    int t; cin >> t;
    while(t--){
        int n, s, m; cin >> n >> s >> m; 
        int soNgayDiCho = s - s / 7; //vì ko bán ngày chủ nhật
        int tongSoLuongThucCanDeSong = s * m;
        int tongSoThitMuaDuoc = n * soNgayDiCho;
        if(tongSoThitMuaDuoc < tongSoLuongThucCanDeSong) cout << "-1";
        for(int i = 1; i <= soNgayDiCho; i++){
            if(n * i >= tongSoLuongThucCanDeSong){
                cout << i << endl;
                break;
            }
        }
    }
}