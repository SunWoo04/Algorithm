#include <iostream>
#include <queue>
using namespace std;
int main(){
    int len,num; cin >> len >> num;
    queue<int>q;
    for (int i = 1; i <= len; i++) q.push(i);
    cout << "<";
    while(q.size() != 0){
        for(int i=1;i<num;i++){
            q.push(q.front());
            q.pop();
        }
        cout << q.front();
        if(q.size() != 1)cout << ", ";
        q.pop();
    }
    cout << ">";
}