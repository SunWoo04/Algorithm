#include <bits/stdc++.h>
using namespace std;
int main(){
    char grade;
    int score;
    cin >> score;

    if(score<=100 && score>=90){
        grade = 'A';
    }else if(score<90 && score>=80){
        grade = 'B';
    }else if(score<80 && score>=70){
        grade = 'C';
    }else if(score<70 && score>=60){
        grade = 'D';
    }else{
        grade = 'F';
    }
    cout << grade;

}