#include<iostream>
#include<string>
using namespace std;

class Human{
  private:
   string name;
   int age; 
   int change(){
     return age-5;
  }

  public:
     void get(int value){
      name="Anu";
      age=value;
    }
    void display();
};
void Human::display(){
  cout<<"Hello "<<name<<change()<<endl;
}

int main(){
  Human anu;//memory stored in stack..
  anu.get(20);
  anu.display();
 //Human *Kamal=new Human{};//memory stored in heap if new is used...
 // Kamal->name="kamal";
 // Kamal->display();
  return 0;
}
