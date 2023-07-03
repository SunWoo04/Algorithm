#include <bits/stdc++.h>
using namespace std;
int main(){
    char temp1[8][8] = {
        {'W','B','W','B','W','B','W','B'},
        {'B','W','B','W','B','W','B','W'},
        {'W','B','W','B','W','B','W','B'},
        {'B','W','B','W','B','W','B','W'},
        {'W','B','W','B','W','B','W','B'},
        {'B','W','B','W','B','W','B','W'},
        {'W','B','W','B','W','B','W','B'},
        {'B','W','B','W','B','W','B','W'}
    };
    char temp2[8][8] = {
        {'B','W','B','W','B','W','B','W'},
        {'W','B','W','B','W','B','W','B'},
        {'B','W','B','W','B','W','B','W'},
        {'W','B','W','B','W','B','W','B'},
        {'B','W','B','W','B','W','B','W'},
        {'W','B','W','B','W','B','W','B'},
        {'B','W','B','W','B','W','B','W'},
        {'W','B','W','B','W','B','W','B'}
    };


    int u,h; cin >> h >> u;
    char arr[h][u];
    for(int i=0;i<h;i++){
        for(int j=0;j<u;j++){
            cin >> arr[i][j];
        }
    }
    int min_value = 987412365;
    int cnt=0;
    for(int i=0;i<=h-8;i++){
        for(int j=0;j<=u-8;j++){
            int cnt1=0;
            int cnt2=0;

            for(int k=0;k<8;k++){
                for(int p=0;p<8;p++){
                    if(arr[k+i][p+j] != temp1[k][p]){
                        cnt1++;
                    }
                    if(arr[k+i][p+j] != temp2[k][p]){
                        cnt2++;
                    }
                }
            }
            cnt = min(cnt1,cnt2);
            if(cnt<min_value){
                min_value = cnt;
            }
        }
    }
    cout << min_value;
}