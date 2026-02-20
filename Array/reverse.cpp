 #include<iostream>
 using namespace std;
 void reverse(int arr[],int size){
    int start = 0;
    int end = size-1;

    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;

    }

 }
 int main(){
    int arr[]={4,5,67,89,2,78,9};
    int size = 7;
    reverse(arr,size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
 }
