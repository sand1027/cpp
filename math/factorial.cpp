#include <bits/stdc++.h>
using namespace std;
int findFactorial(int num){
    int i = 1;
    while(num > 1){
        i = i*num;
        num--;
    }
    return i;
}
int main() {
    cout << findFactorial(4);
    return 0;
}