#include<iostream>
#include<string>

using namespace std;

class stack{
    private:
      int top;
      int stck[5];
    public:
    stack(){
        top=-1;
        stck[5]={0};
    }

    bool isEmpty(){
        if(top==-1)
           return true;
        else
          return false;
    }
    bool isFull(){
        if(top==4)
          return true;
        else 
          return false;

    }

    void push(int val){
        if(isFull())
          cout<<"stack is overflow"<<endl;
        else{
            top++;
            stck[top]=val;
        }
    }

    int pop(){
        if(isEmpty()){
           cout<<"stack is underflow"<<endl;
           return 0;
           }
        else{
            int val=stck[top];
            stck[top]=0;
            top--;
            return val;
        }
    }

    int peek(int pos){
        return stck[pos];
    }

    void change(int pos,int val){
        stck[pos]=val;
    }

    int count(){
        return (top+1);
    }

    void display(){
        int i;
        if(isEmpty()){
            cout<<"stack is underflow"<<endl;
        }
        else{
            for(i=top;i>=0;i--){
                cout<<stck[i]<<endl;
            }
        }
    }
};

int main(){
    stack obj;
    obj.push(5);
     obj.push(4);
      obj.push(3);
       obj.push(2);
        obj.push(1);
    obj.display();
}