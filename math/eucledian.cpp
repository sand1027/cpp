#include <bits/stdc++.h>
using namespace std;
int gcd(int n1, int n2){
    while(n1 !=0 && n2 !=0){
        if(n1 > n2){
            n1 = n1-n2;
        }else{
            n2 = n2-n1;
        }
    }
    if (n2==0){
        return n1;
    }else{
        return n2;
    }
}
int main() {
    cout << gcd(35, 5);
    return 0;
}