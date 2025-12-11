#include <bits/stdc++.h>
using namespace std;
void explainPairs(){
    //initalisation
    pair<int, int>pr = {1,2};
    pair<pair<int, char>,int>pr2 = {{1,'a'}, 5};

    //how to access use .first amd .second
    cout << pr.first << " " << pr.second/*  */ << endl;
    cout << pr2.first.second << pr2.second;
    
};
void explainSets(){
    //set is a ordered collection of unique elements with ascending order
    //initalise
    set<int>st;
    st.insert(45);
    st.insert(23);
    st.insert(6);
    st.insert(2);
    st.insert(24);
    st.insert(25);
    st.insert(22);
    st.insert(21);

    //count is used the count the number of times the digit appears
    cout << st.count(6) << endl;

    //find is ued with iteraor it finds the address of the specific number
    auto it = st.find(45);
    cout << (*it) << endl;

    //erase is used to erase the element from the set 
    auto itr = st.erase(23);

    //lower_bound -> returns the iterator ehich is pointing to the number greater than or equal to the value
    auto it3 = st.lower_bound(23);
    cout << *it3 <<endl;

    //upper_bound -> returns the iterator which is pointing to the element which is greater than the value
    auto itr2 = st.upper_bound(7);
    cout << *itr2 << endl;

    for(auto i : st){
        cout << i << " ";
    }

};
void explainStack(){}
void explainQueue(){}
void explainMap(){
    //initalising
    map<int,char>mpp;
    mpp[1] = 'a';
    mpp[2] = 'b';
    mpp[3] = 'c';
    mpp.insert({4,'d'});

    for(auto i : mpp){
        cout << i.first << "->" << i.second<<endl;
    }

};
void explainPriorityQueue(){};
void explainVectors(){
    //initalisation
    vector<int>vec = {1,2,4,5,6,7,8,9};
    //methods to insert
    vec.push_back(10);
    vec.emplace_back(11);

    //iterator
    vector<int>::iterator beginItr = vec.begin();
    vector<int>::iterator endItr = vec.end();
    //both .begin() and .end() returns the referance point to the start and the end, end in the sense it points to the null value after the last element

    // for(vector<int>::iterator i = beginItr; i < endItr; i++){
    //     cout << *i << " ";
    // }
    //front fetches the first element
    // cout << vec.front() << endl;

    //back fetches the last element
    // cout << vec.back() << endl;

   //to duplicate a vector
   vector<int>dupVec(vec);
//    for(auto i : dupVec){
//         cout << i << endl;
//     }

    //rbegin() -> reverse begin just returns the element which points to the last element
    //rend() -> will point the element before to the  first element

    // auto revBeg = vec.rbegin();
    // auto revEnd = vec.rend();

    // cout << *revBeg << " " << *revEnd << endl ;

    //erase -> used to delete the specific element
    // auto it = vec.begin() +3;
    // vec.erase(it);

    //clear -> is sed to clear the vector
    vec.clear();

    //Auto identifies the type by itself no need of defining the type
    for(auto i : vec){
        cout << i << endl;
    }

}
int main() {
    // explainVectors();
    // explainPairs();
    // explainSets();
    explainStack();
    explainQueue();
    explainMap();
    explainPriorityQueue();
    return 0;
}