#include <bits/stdc++.h>
using namespace std;
void explainQueue(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.size() << endl;
    while(q.empty() == false){
        cout << q.front() << " ";
        q.pop();
    }
}
int main() {
    explainQueue();
    return 0;
}