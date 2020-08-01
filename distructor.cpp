#include<iostream>
#include<string>

using namespace std;
 
class Human{

  public:
    Human(){
     cout<<"Constructor called!!"<<endl;
    }
   ~Human(){
     cout<<"destructor called"<<endl;
    }

};

int main(){

 Human *anil=new Human{};
 delete(anil);//delete used only for pointer...

 return 0;
}
