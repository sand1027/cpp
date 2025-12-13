#include <bits/stdc++.h>
using namespace std;
void explainCount(){
    int arr[6] = {4,5,2,2,1,1};
    int num = 1;
    cout << count(arr, arr+6, num);
}
int main() {
    explainCount();
    return 0;
}