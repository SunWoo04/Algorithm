#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct cmp{
    bool operator()(int a, int b){
        if(abs(a) == abs(b)){
            return a > b;
        }else{
            return abs(a) > abs(b);
        }
    }
};

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    priority_queue<int,vector<int>,cmp>pq;
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