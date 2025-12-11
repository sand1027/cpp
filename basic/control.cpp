/* Given an age print adult if age is equal to or greater than 18
-if age is equal to or seller than 10 print child
*/

/*
Given the marks of a student, tell us the grade he is getting folowwing the below rules
- Grade >= 90 A
-Grade >=70 and <90 B
-Grade >=50 and <70 C
-Grade >=35 and <50 D
-Faile <35
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // int age;
    // cin>>age;
    // if(age >= 18){
    //     cout << "Adult";
    // }
    // if(age <= 10){
    //     cout << "Child";
    // }
    // else{
    //     cout << "Teen";
    // }
    int marks;
    cin >> marks;
    if(marks >= 90){
        cout << "Grade : A";
    }else if(marks >= 70 && marks < 90){
        cout << "Grade : B";
    }else if(marks >= 50 && marks < 70){
        cout << "Grade : C";
    }else if(marks >= 35 && marks < 50){
        cout << "Grade : D";
    }else{
        cout << "Fail";
    }
    return 0;
}