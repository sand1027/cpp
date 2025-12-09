#include <bits/stdc++.h>
using namespace std;
void explainList(){
    list<int>ls = {1,2};
    ls.push_front(0);
    for(auto it : ls){
        cout << it << " ";
    }
}
int main() {
    explainList();
    return 0;
}