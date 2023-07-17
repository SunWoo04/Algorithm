#include <bits/stdc++.h>
using namespace std;
int main(){
    int num; cin >> num;
    int arr[100][100] = {0, };
    int cnt = 0;
    for(int i=0;i<num;i++){
        int a,b; cin >> a >> b;
        for(int j=a;j<a+10;j++){
            for(int k=b;k<b+10;k++){
                if(arr[j][k] == 0)arr[j][k]++;
                else continue;
                cnt++;
            }
        }
    }
    cout << cnt;
}