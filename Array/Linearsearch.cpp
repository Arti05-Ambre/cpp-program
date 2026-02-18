#include<iostream>
using namespace std;
int linearsearch(int arr[],int sz,int target){
    for(int i=0; i<sz; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;

}

int main(){
    int arr[]={1,4,5,8,0,90,3,7};
    int sz= 8;
    int target = 8;
    cout<<linearsearch(arr,sz,target)<<endl;
    

}