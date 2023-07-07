#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    queue<int>q;
    int num; cin >> num;
    for(int i=1;i<=num;i++){
        q.push(i);
    }
    while(q.size() != 0){
        if(q.size() == 1)break;
        q.pop();

        q.push(q.front());
        q.pop();
    }
    cout << q.front();
}