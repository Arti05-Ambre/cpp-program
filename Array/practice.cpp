#include<iostream>
using namespace std;
int main(){
int n = 5;
int sum  = 0;
int count = 1;

while(count <= n){
    sum  += count;
    count++;
}
    cout<<sum<<endl;
return 0;
}
