#include<iostream>
#include<stdlib.h>
using namespace std;

void start(){
 cout<<"\t\t\t\tLIBRARY MANAGEMENT SYSTEM"<<endl;

}

int main(){
  int ch;
  start();
  do{
  cout<<"\tMain Menu"<<endl;
  cout<<"==========================="<<endl;
  cout<<"\n1.Book issue"<<endl;
  cout<<"\n2.Book deposit"<<endl;
  cout<<"\n3.Administrator menu"<<endl;
  cout<<"\n4.exit"<<endl;
  cout<<"\nEnter the required option b/w 1-4....."<<endl;
  cin>>ch;
  switch(ch){
   case 1:
     //bookissue()
   break;
   case 2:
     //bookdeposit()
   break;  
   case 3:
     //administrator menu()
   break;
   case 4:
      exit(0);
   break;
   default:
     cout<<"Oops!!You have entered the incorrect value!!!.."<<endl; 

  }

  }while(ch!=4);
  return 0;
}
