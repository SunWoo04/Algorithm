#include <bits/stdc++.h>
using namespace std;
int main(){
    int num; cin >> num;
    int answer =0;
    for(int i =1;i<=1000000;i++){
        int temp = i;
        int cnt = 0;
        while(temp > 0){
        temp = temp/10;
        cnt++;
        }

        vector<int> arr(cnt, 1);
        for(int j = 1;j<cnt;j++){
            for(int k=0;k<j;k++){
                arr[j] *= 10;
            }
        }
        int sum = i;
        for(int j =0;j<cnt;j++){
            sum += (i/arr[j])%10;
        }
        if(sum == num){
            answer = i;
            break;
        }
    }
    cout << answer;
}
// 198 = 198 +198/100 + (198/10)%10 + (198/1)%10
// sum += (i/arr[j])%10;