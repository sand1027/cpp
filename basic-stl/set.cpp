#include <bits/stdc++.h>
using namespace std;
void explainSet(){
    // set is a datastructure which stores unique elements and in ascending order
    set<int>st;
    st.insert(23);
    st.insert(23);
    st.insert(23);
    st.insert(20);
    st.insert(19);
    st.insert(56);
    st.insert(34);
   
    //find() -> used to find the specific item's address use with iterator
    auto it = st.find(40);
    if(it != st.end()){
        cout << *it << endl;
    }

    // count() -> gives 1 if the  item present in the set and 0 if not
    cout << st.count(23) << endl;
    
    //erase() -> will erase the particular element from set
    st.erase(20);
     for(auto it : st){
        cout << it << " "<<endl;
    }
    //lower_bound -> returns an iteraor pointing to the number which is greater than or wqual to the given element
    auto it2 = st.lower_bound(20);
    cout << *it2;

    //upper_bound -> returns an iterator which points to the value greater than the given value
    auto it3 = st.upper_bound(23);
    cout << *it3;
}
int main() {
    explainSet();
    return 0;
}