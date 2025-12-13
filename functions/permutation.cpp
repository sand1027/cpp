#include <bits/stdc++.h>
using namespace std;
void explainNextPermutation(){
    string str = "abc";
    do{
        cout << str << endl;
    }while(next_permutation(str.begin(), str.end()));
    /*
    output :- it always prints permutations in sorted order
    abc
    acb
    bac
    bca
    cab
    cba
    */
   //previous permutation :- it will start from the value and goes to the previous permutations
   string str1 = "cba";
   cout << "Previous permutation";
       do{
        cout << str1 << endl;
    }while(prev_permutation(str1.begin(), str1.end()));
}
int main() {
    explainNextPermutation();
    return 0;
}