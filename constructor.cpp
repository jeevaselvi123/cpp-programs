#include<iostream>
#include<string>
using namespace std;

class Human{
 private:
  int age;
  string name;
 public:
  Human(){
    name="noname";
    age=0;
    cout<<"constructor called when object is created!!"<<endl;
  }
  /*Human(int val){
   cout<<"constructor called when age is passed!!"<<endl;
   age=val;
   name="noname";
  }
  Human(string s){
   cout<<"constructor called when string is passed!!"<<endl;
   name=s;
   age=0;
  }*/
  Human(string s,int val=8){
   cout<<"constructor called when both string and object is passed!!"<<endl;
   name=s;
   age=val;
  }
  void display();
 

};
 
void Human::display(){
  cout<<"Hello!!Welcome "<<name<<endl<<"Your age is "<<age<<endl;
}

int main(){
 Human anu;
 anu.display();
 Human ammu("ammu");
 ammu.display();
 /*Human jeeva(20);
 jeeva.display();
 Human jd("jd",20);
 jd.display();*/
 return 0;
}


