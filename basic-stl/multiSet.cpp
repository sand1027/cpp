#include <bits/stdc++.h>
using namespace std;
void explainMultiSet(){
multiset<int>ms;
ms.insert(2);
ms.insert(2);
ms.insert(2);
ms.insert(1);
ms.insert(-56);

//find() -> will give the first occuranse of the element
//erase() -> will erase all  the elemnt 
auto it = ms.find(1);
cout << *it << endl;
// auto it2 = ms.erase(2);
auto it2 = ms.erase(ms.find(2));
for(auto it : ms){
    cout << it << " ";
}
}
int main() {
    explainMultiSet();
    return 0;
}