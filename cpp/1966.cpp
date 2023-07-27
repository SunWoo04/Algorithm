#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc; cin >> tc;
    
    while(tc--){
        queue<pair<int,int>>q;
        priority_queue<int> pq;
        int num, p; cin >> num >> p;
        int cnt = 0;
        for(int i=0;i<num;i++){
            int temp; cin >> temp;
            q.push({temp,i});
            pq.push(temp);
        }
        while(!q.empty()){
            int priority = q.front().first;
            int idx = q.front().second;
            q.pop();
            if(pq.top() == priority){
                pq.pop();
                cnt++;
                if(idx == p){
                    cout << cnt << '\n';
                    break;
                }
            }else{
                q.push({priority,idx});
            }
        }
    }
}