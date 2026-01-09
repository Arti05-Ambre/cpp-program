#include<iostream>
 using namespace std;
 int main(){
 int n = 4; 
//upper part
 //left part
 for(int i=1; i<=n ; i++){//outer loop
 
    for(int j=1; j<=i; j++)//innner loop
    
        cout<<"*";
    
    //spaces
    for(int j=1; j<=2*(n-i); j++)
        cout<<" ";


    //right part
    for(int j=1; j<=i; j++)//innner loop
    
        cout<<"*";
   cout<<endl;
    }
   
    
//bottom part

for(int i=n; i>=1; i--){//outer loop
 
    for(int j=1; j<=i; j++)//innner loop
    
        cout<<"*";
    
    //spaces
    for(int j=1; j<=2*(n-i); j++)
        cout<<" ";


    
    for(int j=1; j<=i; j++)//innner loop
    
        cout<<"*";
        cout<<endl;
   
    }


 
return 0;
 }
 
 


