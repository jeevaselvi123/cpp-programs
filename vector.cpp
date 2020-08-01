#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;
int main(){
  vector<int> v={1,2,3,4,5};
/*  v.push_back(100);
  v.push_back(20);
  v.push_back(20);
  v.push_back(40);
  v.push_back(30);*/
  //performed in random access pointers
//  sort(v.begin(),v.end());
  cout<<v.size()<<endl;
  v.erase(std::remove(v.begin(),v.end(),20),v.end());
 // v.erase(v.begin()+2,v.end()-1);
  vector<int>::iterator itr=v.begin();
  cout<<v.size()<<endl;
   for(;itr!=v.end();itr++){
     cout<<"value->"<<*itr<<endl;
   }


  cout<<v.size()<<endl;
  v.clear();
   cout<<v.size()<<endl;
}