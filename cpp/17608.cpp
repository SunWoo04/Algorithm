#include <bits/stdc++.h>
using namespace std;
int main(){
    int num; cin >> num;
    stack<int> st;
    int cnt = 0;
    for(int i = 0; i<num; i++){
        int p;cin >> p;
        st.push(p);
    }
    while(!st.empty()){
        int start_top = st.top();
        st.pop();
        if(start_top<st.top()){
            cnt++;
        }
    }
    cout << cnt;

}

//stack<int> 스택이름; 선언 // 후입선출
//s.push(); 뒤에 스택에 넣는다.
//s.top(); 잴 위에있는 값
//s.pop(); 젤 위에있는 값 빼는것

//queue<int> 큐 이름; // 선입선출
//q.push();
//q.front();
//q.pop();
//q.back(); 가장 뒤에있는

//sq.empty(); 큐, 스택이 비어있다.
//sq.size(); 크기