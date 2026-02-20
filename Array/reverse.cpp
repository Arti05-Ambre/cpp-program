 #include<iostream>
 using namespace std;
 void reverse(int arr[],int size){
    int sum = 0;
    int product = 1;

  for(int i=0; i<size; i++){
        sum +=arr[i];
        product *= arr[i];
        
 }
 cout<<"sum of array is:"<<sum<<endl;
 cout<<"product of array:"<<product<<endl;
    }
 int main(){
    int arr[]={4,5,67,89,2,78,9};
    int size = 7;
    reverse(arr,size);

   
    return 0;
 }
