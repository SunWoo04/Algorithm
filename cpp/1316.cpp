#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    int num; cin >> num;
    int cnt = 0;
    for(int i=0;i<num;i++){
        cin >> str;
        bool flag = 1;
        for(int j=0;j<str.length();j++){
            for(int k=0;k<j;k++){
                if(str[j] != str[j-1] && str[j] == str[k]){
					flag = 0;
					break;			
				}
            }
        }
        if(flag == 1)cnt++;
    }
    cout << cnt;
}