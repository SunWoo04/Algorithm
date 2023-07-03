#include <iostream>
using namespace std;
int main(){
    int num; cin >> num;
    for(int i=1;i<=num;i++){
        int a; cin >> a;
        int b; cin >> b;
        printf("Case #%d: %d\n",i,a+b);
    }
}