#include<iostream>
using namespace std;
int sum(int num){
    int nums = 0;
    while(num > 0 ){
        int lastdig = num % 10;
        num /=10;
        nums +=lastdig;
    }

    return nums;
}
    int main(){
        cout<<"sum = "<<sum(265)<<endl;
        return 0;
    }
