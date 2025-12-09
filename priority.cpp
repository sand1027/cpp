#include <bits/stdc++.h>
using namespace std;
void explainPq(){
    //stores the highest element at the top
    //to store the smallest element first use priority_queue<int, vector<int>, greater<int>>pq
    // maxHeap - > priority_queue<int>pq;
    priority_queue<int, vector<int>, greater<int>>pq;  //min heap
    pq.push(5); 
    pq.push(10);
    pq.push(7);
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
}
int main() {
    explainPq();
    return 0;
}