#include <bits/stdc++.h>
using namespace std;
int pro_n(string str){
    int temp = 0;
    for(int i=0;i<str.length();i++){
        if(str[i] == 'I')temp++;
        if(str[i] == 'V'){
            if(str[i-1] == 'I'){
                temp += 3;
            }else{
                temp += 5;
            }
        }
        if(str[i] == 'X'){
            if(str[i-1] == 'I'){
                temp += 8;
            }else{
                temp += 10;
            }
        }
        if(str[i] == 'L'){
            if(str[i-1] == 'X'){
                temp += 30;
            }else{
                temp += 50;
            }
        }
        if(str[i] == 'C'){
            if(str[i-1] == 'X'){
                temp += 80;
            }else{
                temp += 100;
            }
        }
        if(str[i] == 'D'){
            if(str[i-1] == 'C'){
                temp += 300;
            }else{
                temp += 500;
            }
        }
        if(str[i] == 'M'){
            if(str[i-1] == 'C'){
                temp += 800;
            }else{
                temp += 1000;
            }
        }
    }
    return temp;
}
string pro_r(int num){
    string str;
    while(num){
        if(num - 1000 >= 0){
            str += "M";
            num -= 1000;
        }
        else if(num - 900 >= 0){
            str += "CM";
            num -= 900;
        }else if(num - 500 >= 0){
            str += "D";
            num -= 500;
        }else if(num - 400 >= 0){
            str += "CD";
            num -= 400;
        }else if(num - 100 >= 0){
            str += "C";
            num -= 100;
        }else if(num - 90 >= 0){
            str += "XC";
            num -= 90;
        }else if(num - 50 >= 0){
            str += "L";
            num -= 50;
        }else if(num - 40 >= 0){
            str += "XL";
            num -= 40;
        }else if(num - 10 >= 0){
            str += "X";
            num -= 10;
        }else if(num - 9 >= 0){
            str += "IX";
            num -= 9;
        }else if(num - 5 >= 0){
            str += "V";
            num -= 5;
        }else if(num - 4 >= 0){
            str += "IV";
            num -= 4;
        }else if(num - 1 >= 0){
            str += "I";
            num -= 1;
        }
    }
    return str;
}


int main(){
    string str1,str2; cin >> str1 >> str2;
    int answer = pro_n(str1) + pro_n(str2);
    cout << answer << '\n' << pro_r(answer);
}