#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    int num1;
    int a[10000]; //
    cin >> num >> num1;

    for(int i = 0 ;i<num ; i++){
        cin >> a[i];
        if(num1>a[i]){
            cout << a[i] << " ";
        }
    }
    
}