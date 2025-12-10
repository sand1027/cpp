#include <bits/stdc++.h>
using namespace std;
void explainMap(){
    map<int, string>mpp;
    mpp[1] = "Sandy";
    mpp[2] = "Suhas";
    mpp[3] = "ravi";
    mpp.insert({4, "God"});
    for(auto it : mpp){
        cout << it.first << " -> " << it.second << endl;
    }

    auto it = mpp.find(3);
    cout << (*it).first << " -> " << (*it).second << endl;
}
int main() {
    explainMap();
    return 0;
}