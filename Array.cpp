#include<iostream>
using namespace std;

int main(){
   int nums[]={1,34,56,78,90,-1,45,-6};
   int size = sizeof(nums)/sizeof(nums[0]);
    int smallest = nums[0];
  int largest = nums[0];
  int largestindex= 0;
  int smallestindex = 0;
  
  for(int i=0; i<size; i++){
   if(nums[i]<smallest){
      smallest = nums[i];
      smallestindex=i;
   }
   if(nums[i]>largest){
      largest=nums[i];
      largestindex=i;
   }
  

   
   }
  
  cout<<"Smallest value:"<<smallest<<endl;
  cout<<"largest value:"<<largest<<endl;
  cout<<"index valu for small:"<<smallestindex<<endl;
  cout<<"index valure for large:"<<largestindex<<endl;
return 0;
}