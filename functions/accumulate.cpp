#include <bits/stdc++.h>
using namespace std;
void explainAccumulate(){
    int arr[5] = {3,6,7,1,8};
    //accumulate will return the summation of the array and there is a third parameter which will be start sum and will be added to the result
    cout << accumulate(arr, arr+5, 0);
}
int main() {
    explainAccumulate();
    return 0;
}