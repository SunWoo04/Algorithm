#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,v; cin >> a >> b >> v;
    int answer;
    //(V-A)/(A-B)
    if((v-a)%(a-b) == 0){
        answer = (v-a)/(a-b);
    }else{
        answer = (v-a)/(a-b) + 1;
    }
    cout << answer + 1;
}