#include<iostream>
#include<vector>
using namespace std;

int main(){
    int nums[] ={1,2,1,2,4};
    int ans = 0;
    for(int vec : nums){
        ans ^= ans;
    }
return ans;
}