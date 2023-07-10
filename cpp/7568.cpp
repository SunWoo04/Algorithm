#include <bits/stdc++.h>
using namespace std;

bool cmp1(pair<int,int>a,pair<int,int>b){
    return a.first > b.first;
}
bool cmp2(pair<int,int>a,pair<int,int>b){
    return a.second > b.second;
}

int main(){
    int num; cin >> num;
    int rank = 1;
    pair<int,int>arr[50];
    for(int i=0;i<num;i++){
        cin >> arr[i].first >> arr[i].second;
    }
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            if(arr[i].first < arr[j].first && arr[i].second < arr[j].second){
                rank++;
            }
        }
        cout << rank << ' ';
        rank = 1;
    }
}