#include <bits/stdc++.h>
using namespace std;
void explainFind(){
    int arr[6] = {4,5,2,2,1,1};
    auto it = find(arr, arr+6,1);
    cout << *it;
}
int main() {
    explainFind();
    return 0;
}