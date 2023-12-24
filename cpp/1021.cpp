#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<int> dq;
    int N, M, cnt = 0; cin >> N >> M;

    for(int i=1;i<=N;i++){
        dq.push_back(i);
    }
    while(M--){
        int temp; cin >> temp;
        bool front = false;
        for(int i=0;i<dq.size()/2+1;i++){
            if(dq[i] == temp){
                front = true;
                break;
            }
        }
        if(front){
            while(temp != dq.front()){
                cnt++;
                dq.push_back(dq.front());
                dq.pop_front();
            }
            dq.pop_front();
        }else{
            while(temp != dq.front()){
                cnt++;
                dq.push_front(dq.back());
                dq.pop_back();
            }
            dq.pop_front();
        }
    }
    cout << cnt;
}
