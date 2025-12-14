#include <bits/stdc++.h>
using namespace std;
int findLargest(int num){
    int largest = 0;
    while(num){
        int ld = num%10;
        if(ld > largest){
            largest = ld;
        }
        num = num/10;
    }
    return largest;
}
int main() {
    cout << findLargest(54679);
    return 0;
}