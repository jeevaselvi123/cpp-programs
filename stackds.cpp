#include<iostream>
#include<string>

using namespace std;

int stack[100];
int top=-1;
int n;

void push();
void pop();
int isfull();
int isempty();
void display();
void palindrome();

void push(){
    int num;
    if(top<=n-1){
        cout<<"enter the element to push-->"<<endl;
        cin>>num;
        top++;
        stack[top]=num;
        cout<<"Successfully inserted!!!"<<endl;
    }
    else
      isfull();

}

int isfull(){
    if(top>=n-1){
      cout<<"Oops!!Stack is full!!"<<endl<<"---unable to insert further element---"<<endl;
      return 1;
    }
    cout<<"Stack is not full:)... "<<endl;
    return 0;
}

int isempty(){
    if(top<=-1){
        cout<<"No elements are there in the stack!!!"<<endl<<"---unable to proceed the pop operations further--"<<endl;
        return 1;
    }
    cout<<"Stack is not empty:)...0"<<endl;
    return 0;
}

void pop(){
    int num;
    if(top>=-1){
        num=stack[top];
        top--;
        cout<<"Popped Successfully!!"<<endl<<"popped element is->"<<num<<endl;
    }
    else
      isempty();
}

void display(){
    int i;
    if(top>=-1){
        cout<<"Elements in the stack are..."<<endl;
        for(i=top;i>=0;i--){
            cout<<stack[i]<<"-->";
        }
        cout<<endl;
    }
    else{
        cout<<"Stack is empty!!"<<endl;
    }   
}

void palindrome(){
   char s[100];
   cout<<"enter the string"<<endl;
   cin>>s;
   cout<<s<<endl;
   

}

int main(){
    int ch,a;
      cout<<"Enter the size of the stack==>"<<endl;
      cin>>n;
        cout<<"Enter the required operation==>"<<endl;
          do{
              cout<<"1.Push"<<endl;
                 cout<<"2.Pop"<<endl;
                    cout<<"3.Isfull"<<endl;
                       cout<<"4.Isempty"<<endl;
                         cout<<"5.display"<<endl;
                           cout<<"6.palindrome"<<endl;
                       
                          cin>>ch;
                          switch(ch){
                              case 1:
                                  push();
                                  break;
                               case 2:
                                  pop();
                                  break;
                               case 3:
                                  isfull();
                                  break;
                                case 4:
                                  isempty();
                                  break;
                                case 5:
                                  display();
                                  break;
                                case 6:
                                  palindrome();
                                  break;
                                default:
                                  if(ch!=0)
                                   cout<<"~~You are requested to enter the corect option~~"<<endl;
                        
                          }
                           cout<<"To continue enter 1 or 0--->"<<endl;
                           cin>>a;
          }while(a!=0);

}