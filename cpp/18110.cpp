#include <bits/stdc++.h>
using namespace std;
int main(){
    int num; cin >> num;
    if(num == 0){
        cout << 0;
        return 0;
    }
    deque<int>v;
    double difficulty = 0;
    for(int i=0;i<num;i++){
        int temp; cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    for(int i=1;i<=round(num*0.15);i++){
        v.pop_front();
        v.pop_back();
    }
    for(int i=0;i<v.size();i++){
        difficulty += v[i];
    }
    difficulty /= v.size();
    cout << round(difficulty);
}