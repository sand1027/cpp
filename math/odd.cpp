#include <bits/stdc++.h>
using namespace std;
int countOdd(int num){
    int count = 0;
    while(num){
     if(num%2 != 0){
        count++;
     }
     num = num/10;
    }
    return count;
}
int main() {
    cout << countOdd(36709873);
    return 0;
}