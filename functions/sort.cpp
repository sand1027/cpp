#include <bits/stdc++.h>
using namespace std;
void explainSort(){
    int arr[5] = {3,6,7,1,8};
    //arr -> is the start  index and the arr+5 is the last index we can add 1 or 2 to sort in specific range
    sort(arr, arr+5);
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " " << endl;
    }
    vector<int>vec = {25,2,4,5,6,1,9,0,45};
    sort(vec.begin(), vec.end());
    for(auto it : vec){
        cout << it << " ";
    }
}
int main() {
    explainSort();
    return 0;
}