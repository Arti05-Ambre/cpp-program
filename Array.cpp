#include<iostream>
using namespace std;

int main(){
   int nums[]={1,34,56,78,90,-1,45,-6};
   int size = 8;
   
        int smallest = nums[0];
  int largest = nums[0];
 
  for(int i=0; i<size; i++){
   smallest = min(nums[i],smallest);
   largest = max(nums[i],largest);
   

   
   }
  
  cout<<"Smallest value:"<<smallest<<endl;
  cout<<"largest value:"<<largest<<endl;
  
return 0;
}