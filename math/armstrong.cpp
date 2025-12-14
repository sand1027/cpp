#include <bits/stdc++.h>
using namespace std;
int countNum(int num){
    int count = 0;
    while(num){
        num =  num/10;
        count++;
    }
    return count;
}
bool isArmStrong(int num){
    int refNum = num;
    int digit = countNum(num);
    int sum = 0;
    while(num){
        int ld = num%10;
        sum = sum + pow(ld,digit);
        num = num/10;
    }
    if(refNum == sum){
        return true;
    }
    return false;
}
int main() {
    cout << isArmStrong(153);
    return 0;
}