#include<iostream>
using namespace std;

int main(){
   int nums[]={1,34,56,78,90,-1,45,-6};
   int size = 8;
   int smallest;
   for(int i=0; i<size; i++ ){
     if (nums[i]<smallest){
     smallest = nums[i];
   }
}

   cout<<"samllest:"<<smallest <<endl;
return 0;
}