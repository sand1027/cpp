#include <bits/stdc++.h>
using namespace std;
void explainVectors(){
    // vector<int> vec = {7, 8};
    // vec.push_back(0);
    // vec.push_back(1);
    // vec.emplace_back(2);
    /*
    push_back -> will insert an el;ement to array
    emplace_back -> will insert an element to array
    .size() -> returns the size of an vectoe
    */
    //to print vector elements

    /*
    is there any other way to print vec
    yes, use iterator
    use.begin()
    .begin() -> will give the reference of the first element of the vector
    .end() -> will point to the elemet after the end element, not the end element
    */
    // vector<int>::iterator beginItr = vec.begin();
    // vector<int>::iterator endItr = vec.end();
    // // cout << *itr << " ";

    // for(vector<int>::iterator i = beginItr; i < endItr; i++){
    //     cout << *i << " ";
    // }
    
    // for(int i = 0; i< vec.size(); i++){
    //     cout << vec[i] << endl;
    // }

    //Auto :- used to assign the type of the iteraot automatically
    // auto beginItr = vec.begin();
    // auto endItr = vec.end();
    // for(auto i = beginItr; i < endItr; i++){
    //     cout << *i << endl;
    // }

    //we can run for each loop to print as well
    // for(auto i : vec){
    //     cout << i << " ";
    // }


    //reverse iterator
    /*
    rbegin() -> it will point to the last elemet
    rend() -> it will point to the element before first digit that is previous to first element

        auto reverseBegin = vec.rbegin();
    auto reverseEnd = vec.rend();
    for(auto i = reverseBegin; i < reverseEnd; i++){
        cout << *i << " ";
    }

    */

    //types of initalisation
    /*
    vector<int> vec(5); -> output 2 1 0 0 0 0 0 0  because we did not tell what to print
    vector<int> vec(5, 8) -> output 2 1 0 8 8 8 8 8  prints 5 8's
    vector<int> vec = {7, 8} -> output 2 1 0 8 7 

    */

    //Dulpicate a vector
    /*
        vector<int>dupVec(vec);
    for(auto i : dupVec){
        cout << i << " ";
    }
    */



    //Duplicate in tange
/*
    vector<int>dupVec(vec.begin()+1, vec.end());
        for(auto i : dupVec){
        cout << i << " ";
    }

*/

//front and back
//front -> used to fetch the first ekement
//BAck -> used to getch the last ekement
//eraze -> will work with iterator u acnnot give index to delete
//clear -> will clear everything in vector
//at  -> it is used to access an element in vector

// cout << vec.front() << " ";
// cout << vec.back();
// vec.erase(vec.begin()+1);
// vec.clear();
// for (auto i : vec){
//     cout << i << " ";
// }
//    vector<int> vec = {7, 8};
//     vec.push_back(0);
//     vec.push_back(1);
//     vec.emplace_back(2);

// for(auto it : vec){
//     cout << it << " ";
// }

//Swap 

vector<int>v1 = {2,6,4,5,7,9};
// vector<int>v2 = {6,7};
// swap(v1, v2);
v1.insert(v1.begin() + 2, 10);
for(auto it : v1){
    cout << it << " ";
}
}
int main() {
    explainVectors();
    return 0;
}