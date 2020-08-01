#include<iostream>
#include<string>

using namespace std;

class Human{
  private:
    int age;
    int change(){
     return age-3;
    }

 public:
   void displayage(){
     cout<<"Hello you age is "<<change()<<endl;
   }
   
   void getage(int value){
     age=value;
   }
};

int main(){
  Human Anu;
  Anu.getage(25);
  Anu.displayage();
 return 0;
}
