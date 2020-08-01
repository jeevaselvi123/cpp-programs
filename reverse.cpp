#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;

int main(){
    stack<char> st,sw;
    int i,a;
    cout<<"Enter the stack elements"<<endl;
    for(i=0;i<5;i++){
        cin>>a;
        st.push(a);
    }
    
     cout<<"Elements are"<<endl;
    while(!st.empty()){
     //   cout<<st.top()<<endl;
        sw.push(st.top());
        st.pop();
        cout<<sw.top();
        sw.pop();
    }
    cout<<st.top()<<endl;
}