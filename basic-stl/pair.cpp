#include <bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int, int>p1 = {1,2};
    pair<int, int>p2 = make_pair(3,4);
    cout << p1.first << " "<<p1.second << endl;
    cout << p2.first << " "<<p2.second << endl;
    //we can store a pair inside pair as well
    pair<pair<int, char>,int>p3 = {{1,'a'}, 5};
    //how to access
    //p3.first -> {1,'a}
    //p3.first.second -> 'a'
    cout << p3.first.second;
}
int main() {
    explainPair();
    return 0;
}