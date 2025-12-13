#include <bits/stdc++.h>
using namespace std;
bool changeComparasion(int el1, int el2){
    if(el1 < el2) return false;
    return true;
}
bool internalCpmparator(pair<int, int>el1, pair<int, int>el2){
    if(el1.second > el2.second) return true;
    if(el1.second < el2.second) return false;
    if(el1.first < el2.first) true;
    return false;
}
void explainComparators(){
    // int arr[] = {5,6, 1, 2};
    // sort(arr, arr+4, changeComparasion);
    // for(auto i : arr){
    //     cout << i << " ";
    // }
    pair<int, int>arr[] = {{1,6}, {1,5}, {2,6}, {2,9}, {3, 9}};
    sort(arr, arr+5, internalCpmparator);
    for(auto i : arr){
        cout << i.first << "->" << i.second << endl;
    }
}
int main() {
    explainComparators();
    return 0;
}