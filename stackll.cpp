#include<iostream>

using namespace std;

struct Node{
    int data;
    Node *link;
};

bool isempty();
void push(int value);
void pop();
void showtop();

Node *top=NULL;

bool isempty(){
    if(top==NULL) return true;
    else return false;
}

void push(int value){
    Node *ptr=new Node();
    ptr->data=value;
    ptr->link=top;
    top=ptr;
}

void pop(){
    if(isempty()){cout<<"Stack is empty.."<<endl;}
    else{
    Node *ptr=top;
    top=top->link;
    delete(ptr);
    showtop();
    }
}

void showtop(){
    if(isempty()){
     cout<<"Stack is empty.."<<endl;
    }
    else{
        cout<<top->data<<endl;
    }

}

void show(){
    if(isempty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        Node *ptr=top;
        cout<<ptr->data<<endl<<"^"<<endl<<"|"<<endl;
        ptr=ptr->link;

    }
}
int main(){
    push(2);
    push(3);
    push(4);
    push(5);
    show();
    pop();
  

}