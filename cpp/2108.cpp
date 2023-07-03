#include <bits/stdc++.h>
using namespace std;
int main(){
    int num; cin >> num;
    double sum1 = 0;
    int v[num];
    for(int i =0;i<num;i++){
        cin >> v[i];
        // 산술평균
        sum1 += v[i];
    }
    double slice;
    if(sum1/num<0){
        slice = (sum1/num) - 0.5;
    }else{
        slice = (sum1/num) + 0.5;
    }
    if(double(sum1/num) == -0){
        printf("%d\n",abs((int)slice)); // 절대값
    }else{
        printf("%d\n",(int)slice);
    }
    // 중앙값(num은 홀수임)
    sort(v,v+num);
    cout << v[num/2] << '\n';
    // 최빈값
    vector<int> arr;
    for(int i =0;i<8001;i++){
        arr.push_back(0);
    }
    for(int i =0;i<num;i++){
        arr[v[i] + 4000]++;
    }
    vector<int>arr2;
    int maxIndex = 0;
    for(int i =0; i<8001;i++){
        if(arr[i] > arr[maxIndex]){
            maxIndex = i;
            // maxIndex + 4000
        }
    }
    for(int i =0; i<8001;i++){
        if(arr[i] == arr[maxIndex]){
            arr2.push_back(i);
        }
    }
    if(arr2.size()>1){
        cout << arr2[1]-4000 << '\n';
    }else{
        cout << arr2[0]-4000 << '\n';
    }
    // 범위(최대값과 최소값의 차이)
    cout << v[num-1] - v[0] << '\n';
}