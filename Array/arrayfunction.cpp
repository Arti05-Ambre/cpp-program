#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    cout<<"size="<<vec.size()<<endl;
    vec.push_back(56);
    vec.push_back(6);
    vec.push_back(560);
    vec.push_back(516);
 cout<<"size of vector after push back="<<vec.size()<<endl;
 
 
 vec.pop_back();
 cout<<"Front value in array="<<vec.front()<<endl;
 cout<<"back value in array="<<vec.back()<<endl;


 for(int val:vec){
    cout<<val<<endl;

 }

 return 0;
}
