#include <bits/stdc++.h>
using namespace std;
int main(){
    int repeat; cin >> repeat;
    int num; cin >> num;
    int arr[repeat];
    for(int i=0;i<repeat;i++)cin >> arr[i];
    int max=0;
    for(int i=0;i<repeat;i++){
        for(int j=0;j<repeat;j++){
            if(j != i){
                for(int k=0;k<repeat;k++){
                    if(k != j && k != i){
                        int temp = 0;
                        temp = arr[i] + arr[j] + arr[k];
                        if(temp > max && temp <= num){
                            max = temp;
                        }
                    }
                }
            }
        }
    }
    cout << max;
}