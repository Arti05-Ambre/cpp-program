#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(56);
    vec.push_back(0);
    vec.push_back(6);
    vec.push_back(560);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
 return 0;
}
