#include <bits/stdc++.h>
using namespace std;
int lcm(int n1, int n2){
    int i = 1;
    int maxNum = max(n1, n2);
    do{
        int multiple = i * maxNum;
        if(multiple % n1 ==0 && multiple % n2 ==0){
            return multiple;
        }
    }while(1);
    return -1;
}
int main() {
    cout << lcm(3, 15);
    return 0;
}