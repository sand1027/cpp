#include <bits/stdc++.h>
using namespace std;
void explainMaxElement(){
    //max_element will always return an iteraor pointing to the largest element in array
    //min_element will always return an iterator pointing to the min element in an array

    int arr[6] = {4,5,2,2,1,1};
    auto it = *max_element(arr, arr+6);
    cout << it;

}
int main() {
    void explainMaxElement();
    return 0;
}