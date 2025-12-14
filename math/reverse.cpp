#include <bits/stdc++.h>
using namespace std;
int numReverse(int num){
    int rev = 0;
    while(num){
        int ld = num%10;
        rev = (rev*10) + ld;
        num = num/10;
    }
    return rev;
}
int main() {
    cout << numReverse(3456);
    return 0;
}