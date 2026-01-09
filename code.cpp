#include<iostream>
 using namespace std;
 int main(){
 int n = 4; 

 //top part
 for(int i=0; i<n ; i++){//outer loop
 
    for(int j=0; j<n-i-1; j++){//innner loop
        //spaces
        cout<<" ";
    }
    //print star
    cout<<"*";
    if(i !=0){

    
//again space 
    for(int j=1; j<=2*i-1; j++ ){
            cout<<" ";
        }
        //again print star
        cout<<"*";
        
        
    }
        
 cout<<endl;
 }



 //Bottom part

 //outer loop
 for(int i=0; i<n-1; i++ ){// 0 to n-2
    //spaces
   
    for(int j=0; j<i+1; j++){
        cout<<" ";
    }
    cout<<"*";

  if(i != n-2){
 for(int j=0; j<2*(n-i)-5; j++){
    cout<<" ";
 }
 cout<<"*";
}
cout<<endl;
 }
 

return 0;
 }
 
 


