#include<iostream>
 using namespace std;
 int main(){
 int n = 1;
 int sum = 0;
 while(n<=100){
  if(n%3==0){
    sum += n;
  }
  n++;
  
 }
 cout<<"sum of divisible by 3="<<sum<<endl;
 

 return 0;
}

