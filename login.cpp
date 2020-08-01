#include<iostream>
#include<string>
#include<istream>
#include<fstream>
#include<stdlib.h>
using namespace std;
void login();
void registr();
void forgot();
int main(){
   int ch;
   cout<<"``````````LOGIN```````````"<<endl;
   cout<<"1.Login"<<endl;
   cout<<"2.Register"<<endl;
   cout<<"3.Forgot Password"<<endl;
   cout<<"4.Exit"<<endl;
   cout<<"Enter your choice:\t"<<endl;
   cin>>ch;
   switch(ch){
     case 1:
       login();
       break;
     case 2:
      registr();
       break;
     case 3:
       forgot();
       break;
     case 4:
       cout<<"Thank You!!Have a nice day.....:)"<<endl;
       break;
     default:
       cout<<"Choosen incorrect option..!!"<<endl;
       main();
   }
   
}

void registr(){
   string uname,pwd;
   cout<<"Enter the username:"<<endl;
   cin>>uname;
   cout<<"Enter the password:"<<endl;
   cin>>pwd;
   ofstream reg("db.txt",ios::app);
   reg<<uname<<' '<<pwd;
   cout<<"Registered Successfully!!"<<endl;
   main();
}

void login(){
 int token;
 string name,password,u,p;
 cout<<"Enter the user nmae:"<<endl;
 cin>>name;
 cout<<"Enter the Password:"<<endl;
 cin>>password;

 ifstream inp("db.txt");
 while(inp>>u>>p){
  if(name==u&&password==p){
   token=1;
  }
 }
 inp.close();
 if(token ==1){
   cout<<"Hello "<<name<<"!!Welcome!!";
   cin.get();
   main();
 }
 else{
   cout<<"Login Error!!";
   cin.get();
   main();
  }
 
}


void forgot(){
 int ch;
 cout<<"1.Search by username..."<<endl;
 cout<<"2.Search by password..."<<endl;
 cout<<"3.Return to Menu..."<<endl;
 cout<<"Enter your choice..."<<endl;
 cin>>ch;
 switch(ch){
  case 1:
   {
    int ex=0;
    string suser,su,sp;
    cout<<"Enter the user name for search..."<<endl;
    cin>>suser;
    ifstream searchname("db.txt");
    while(searchname>>su>>sp){
      if(su==suser){
        ex=1;
        break;
      }
    }
     searchname.close();
     if(ex==1){
     cout<<"Account exists...\nYour Password is "<<sp<<endl;
     cin.get();
     main();
     }
     else{
      cout<<"Account not exist...\n";
      cin.get();
      main();
     }
     break;
    }
   case 2:
   {
     int ex1=0;
     string spwd,su2,sp2;
     cout<<"Enter the password for search...."<<endl;
     cin>>spwd;
     ifstream searchp("db.txt");
     while(searchp>>su2>>sp2){
       if(spwd==sp2){
         ex1=1;
         break;
        } 
     }
     searchp.close();
     if(ex1==1){
       cout<<"Account found....\nYour username is "<<su2;
       cin.get();
       main();
     }
    else{
      cout<<"Account not found...\n";
       cin.get();
       main();
    }
    
    break;
    }
   case 3:
      main();
      break;
   default:
      {
      cout<<"Choosen the incorrect option...Press a key to continue...";
      cin.get();
      forgot();
      }
    }
}

