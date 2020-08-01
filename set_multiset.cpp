#include<iostream>
#include<set>

using namespace std;

int main(){
    multiset<int ,less<int>> myset;

    myset.insert(10),myset.insert(20),myset.insert(30),myset.insert(10),myset.insert(10);

   // myset.erase(10);

    for(auto &setval : myset)
      cout<<setval<<endl;
}