#include <bits/stdc++.h>
using namespace std;
int main(void){
    //2, 5를 곱하여 10을 만들면 끝자리 수가 0으로 됨.
    //소인수분해하면 5가 2보다 나올 개수가 더 작기때문에 5만 구해서 갯수를 출력해주면 됨.
    int num; cin >> num;
    int cnt=0;
    for(int i = 2; i <= num; i++){
        if (i % 5 == 0) cnt++;
		if (i % 25 == 0) cnt++;
		if (i % 125 == 0) cnt++;
    }
    cout << cnt;
}