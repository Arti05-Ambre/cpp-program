#include<iostream>
#include<vector>
using namespace std;

int main(){
    int nums[] ={1,2,1,2,};
    int ans = 0;
    for(int vec : nums){
        ans ^= vec;
    }
    cout<<"the unique number is:"<<ans<<endl;
return 0;
}