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
int main() {
    cout << countNum(2345);
    return 0;
}