#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[15][15] = {0,}; // 전부 0으로 초기화
    for(int i=1;i<=14;i++){
        arr[0][i] = i;
    }
    for(int i=1;i<=14;i++){
        for(int j=1;j<=14;j++){
            for(int k=1;k<=j;k++){
                arr[i][j] += arr[i-1][k];
            }
        }
    }
    //arr[a][b] += for(int i = 1; i <= b; i++) arr[a-1][i]
    int num; cin >> num;
    int a,b;
    for(int i=0;i<num;i++){
        cin >> a >> b;
        cout << arr[a][b] << '\n';
    }
    
}