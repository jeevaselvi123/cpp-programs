#include<iostream>
#include<stack>
#include<string>

using namespace std;

int precedence(char c){
   if(c=='^')
     return 3;
    else if(c=='*'||c=='/')
      return 2;
    else if(c=='+'||c=='-')
       return 1;
    else  
       return -1;
}

string conversion(string infix){
    stack <char> st;
    string postfix;
    int s=infix.size();
    for(int i=0;i<s;i++){
       if((infix[i]>='a'&&infix[i]<='z')||(infix[i]>='A'&&infix[i]<='Z')){
           postfix+=infix[i];
       }
       else if(infix[i]=='(')
         st.push(infix[i]);
       else if(infix[i]==')'){
          postfix+=st.top();
          st.pop();
       }
       else{
           if(st.empty()){
               st.push(infix[i]);
           }
           else{
               if(precedence(infix[i])>precedence(st.top())){
                   st.push(infix[i]);
               }
               else if(precedence(infix[i])==precedence(st.top())&&precedence(infix[i])=='^'){
                   st.push(infix[i]);
               }
               else{
                   while((!st.empty())&&(precedence(infix[i])<=precedence(st.top()))){
                       postfix+=st.top();
                       st.pop();
                   }
                   st.push(infix[i]);
               }
           }
       }
    }
    while(!st.empty()){
        postfix+=st.top();
        st.pop();
    }
    return postfix;
}

int main(){
    string infix_exp,postfix_exp;
    cout<<"enter the string"<<endl;
    cin>>infix_exp;
    postfix_exp=conversion(infix_exp);
    cout<<postfix_exp<<endl;
}