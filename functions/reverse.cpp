#include <bits/stdc++.h>
using namespace std;
void explainReverse(){
    int arr[6] = {4,5,2,2,1,1};
    reverse(arr, arr+6);
    for(auto i : arr){
        cout << i << " ";
    }
}
int main() {
    explainReverse();
    return 0;
}