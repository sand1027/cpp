#include <bits/stdc++.h>
using namespace std;
bool isPrime(int num){
    if(num == 1) return false;
    for(int i = 2; i * i <= num; i++){
        if(num%i == 0) return false;
    }
    return true;
}
int primeTillN(int n){
    int count = 0;
    for(int i = 2; i < n; i++){
        if(isPrime(i)){
            count++;
        }
    }
    return count;
}
int main() {
    cout << isPrime(3) << endl;
    cout << primeTillN(100);
    return 0;
}