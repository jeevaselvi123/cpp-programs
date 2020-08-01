#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main(){

    unordered_multimap<int,int> mp;

    //mp[5]=100;
    //mp[1]=200;
    //mp[3]=300;
   // mp[2]=400;
    mp.insert(make_pair(5,400));
     mp.insert(make_pair(4,100));
     mp.insert(make_pair(3,300));
     mp.insert(make_pair(1,1000));

    for(auto itr=mp.begin();itr!=mp.end();itr++){
        cout<<itr->first<<"-->"<<itr->second<<endl;
    }
    cout<<mp.size()<<endl;
    mp.clear();
    cout<<mp.size()<<endl;
}