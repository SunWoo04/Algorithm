#include <bits/stdc++.h>
#define for(i,n) for(int i=1;i<=n;i++)

using namespace std;
int main(){
    int num; cin >> num;
    for(i,num*2-1){
        if(i<num){
            for(j,i)cout << '*';
            for(j,(num-i)*2)cout << ' ';
            for(j,i)cout << '*';
        }else{
            for(j,num*2-i)cout << '*';
            for(j,(num-(num*2-i))*2)cout << ' ';
            for(j,num*2-i)cout << '*';
        }
        cout << '\n';
    }
}