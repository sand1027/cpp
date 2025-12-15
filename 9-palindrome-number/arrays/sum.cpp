#include <bits/stdc++.h>
using namespace std;
int sumOfArray(int arr[], int n){\
    int sum = 0;
    for (int i = 0 ; i < n ; i++ ){
        sum = sum + arr[i];
    }
    return sum;
}
int main() {
     int arr[] = {1, 2, 3, 4, 5, 6};
    cout << sumOfArray(arr, 6);
    return 0;
}