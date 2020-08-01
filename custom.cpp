#include<iostream>
#include<vector>

using namespace std;

template<typename type>
struct MyAlloc :  allocator<type>{
   type * allocate(size_t size){
       cout<<"allocation size"<<size<<endl;
       return new type[size];
   }
};

int main(){
  vector<int , MyAlloc<int>> v;
  v.push_back(120);

  for(auto &var: v){
      cout<<var<<endl;
  }
}