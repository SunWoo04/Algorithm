#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    map<ll,int>m;
    int num; cin >> num;
    for(int i=0;i<num;i++){
        ll temp; cin >> temp;
        m[temp]++;
    }
    int max = 0;
    ll card;
    for(auto &i : m){
        if(max < i.second){
            max = i.second;
            card = i.first;
        }else if(max == i.second){
            if(card > i.first){
                card = i.first;
            }
        }
    }
    cout << card;
    
}