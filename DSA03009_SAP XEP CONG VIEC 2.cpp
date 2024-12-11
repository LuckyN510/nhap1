#include<bits/stdc++.h>

using namespace std;

struct Job{
    int id, deadline, profit;
};

bool cmp(Job A, Job B){
    return A.deadline > B.deadline;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        Job a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i].id >> a[i].deadline >> a[i].profit;
        }
        sort(a, a + n, cmp);
        int cur_date = a[0].deadline;
        int res = 0;
        int idx = 0;
        int cnt = 0;
        priority_queue<int> pq;
        while(cur_date >= 1){
            while(idx < n && a[idx].deadline >= cur_date){
                pq.push(a[idx].profit);
                idx++;
            }
            if(!pq.empty()){
                res += pq.top(); pq.pop();
                ++cnt;
            }
            cur_date--;
        }
        cout << cnt << " " << res << endl;
    }
}