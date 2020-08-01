#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>

using namespace std;

int main(){
    vector<int> v {1,2,3,4,5,6};
    vector<int> vout;
    //map_transform
    transform(v.begin(),v.end(),back_inserter(vout),[](int &val){return val*3;});

   /* for(auto &value:vout)
      cout<<value<<endl;*///filter
      vector<int> ::iterator endfilter=remove_if(vout.begin(),vout.end(),[](int &val){
          if(val%2==0)
            return true;
          else
            return false;
      });
      for(auto itr=vout.begin();itr!=endfilter;itr++){
          cout<<*itr<<endl;
      }
      //reduce
        int finalvalue=accumulate(vout.begin(),endfilter,0,[](int first,int second){return first+second;});
        cout<<"final value"<<finalvalue<<endl;

}