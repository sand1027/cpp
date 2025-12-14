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
bool isPalnidrome(int num){
    int rev = numReverse(num);
    if(rev == num){
        return true;
    }
    return false;

}
int main() {
    cout << isPalnidrome(152);
    return 0;
}