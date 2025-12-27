#include<iostream>
 using namespace std;
 int main(){
  int n = 1;
  int sum = 0;
  while(n<=100){
    if(n%2==0){
      sum += n;
    }
    n++;
    
  }
  cout << "print even number:"<<sum<<endl;

  return 0;
}