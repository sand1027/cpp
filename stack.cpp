#include <bits/stdc++.h>
using namespace std;
void explainStack(){
stack<int>st;
st.push(0);
st.push(1);
st.push(3);
// cout << st.top() << endl;
// st.pop();
// cout << st.top() << endl;
while(st.empty() == false){
    cout << st.top() << " ";
    st.pop();
}

}
int main() {
    explainStack();
    return 0;
}