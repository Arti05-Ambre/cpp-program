#include<iostream>
 using namespace std;
 int sumN( int n){
   int sum = 0;
  for(int i=1; i<=n; i++){
   sum += i;
  }
  return sum;
 }
    
 int main(){ 
  cout<<"sum="<<sumN(100)<<endl; 
  cout<<sumN(10)<<endl; 
  cout<<sumN(50)<<endl; 
  cout<<sumN(1000)<<endl; 



return 0;
 }
 
 


