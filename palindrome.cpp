#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    stack<char> st;
    string s1,s2;
    cout<<"Enter the strings.."<<endl;
    cin>>s1;
    for(int i=0;s1[i]!='\0';i++){
       st.push(s1[i]);
    }
    cout<<st.size()<<endl;
    while(!st.empty()){
       s2=s2+st.top();
       st.pop();
    }
    cout<<s2.length()<<endl;
    cout<<s2;
   if(!(s1.compare(s2)))
       cout<<"String is a palindrome"<<endl;
    else
        cout<<"String is not a palindrome"<<endl;
}