#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main(){
    priority_queue<int,vector<int>,std::less<int>> s;

    s.push(100);
    s.push(20);
    s.push(130);
    s.push(130);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

    cout<<s.size()<<endl;

}