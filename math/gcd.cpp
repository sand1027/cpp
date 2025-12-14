#include <bits/stdc++.h>
using namespace std;
int finDGcd(int n1, int n2){
    int largest = 0;
    if(n1 == 1 || n2 == 1) return 1;
    for(int i = 2; i < min(n1, n2); i++){
        if(n1 % i == 0 && n2%i == 0){
            largest = i;
        }
    }
    return largest;
}
int main() {
    cout << finDGcd(35, 10);
    return 0;
}