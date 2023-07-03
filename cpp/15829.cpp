#include <bits/stdc++.h>
using namespace std;
int main(){
    int num; cin >> num;
    int value=0;
    for(int i=0;i<num;i++){
        char temp; cin >> temp;
        temp -= 'y';
        for(int j=1;j<=i;j++){
            temp *=31;
        }
        value += (int)temp;
    }
    cout << value;
}