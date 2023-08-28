#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[501][501];
    int n,m,b; cin >> n >> m >> b;
    int first_b = b;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    int min_cnt = INT_MAX;
    int hight = 0;
    for(int t=0;t<=256;t++){
        int cnt1 = 0; //dig
        int cnt2 = 0; //fill
        b = first_b;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j] < t){
                    cnt2 += t - arr[i][j];
                    b -= t - arr[i][j];
                }else if(arr[i][j] > t){
                    cnt1 += arr[i][j] - t;
                    b += arr[i][j] - t;
                }
            }
        }
        if(b >= 0){
            if(cnt1 * 2 + cnt2 <= min_cnt){
                hight = t;
                min_cnt = cnt1*2 + cnt2;
            }
        }
    }
    cout << min_cnt << ' ' << hight;
}