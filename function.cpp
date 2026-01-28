#include<iostream>
using namespace std;
int factofn(int n){
   int fact = 1;
   for(int i=1; i<=n; i++){
    fact *= i;
    

   }
return fact;
}
int main(){
    cout<< "factotial is "<<factofn(5)<<endl;
    return 0;
}