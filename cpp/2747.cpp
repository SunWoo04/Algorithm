#include <bits/stdc++.h>
using namespace std;
int main(){
    int num; cin >> num;
    queue<int>q;
    q.push(0); q.push(1);
    for(int i=0;i<num-1;i++){
        q.push(q.front()+q.back());
        q.pop();
    }
    cout << q.back();
}