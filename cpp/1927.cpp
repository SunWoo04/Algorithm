#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    priority_queue<int,vector<int>,greater<int>>pq;
    int num; cin >> num;
    for(int i=0;i<num;i++){
        int temp; cin >> temp;
        if(temp == 0){
            if(pq.empty()){
                cout << 0 << '\n';
            }else{
                cout << pq.top() << '\n';
                pq.pop();
            }
        }else{
            pq.push(temp);
        }
    }
}