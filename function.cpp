#include<iostream>
using namespace std;
int minoftwo(int a, int b){
    if(a<b){
        return a;
    }else{
        return b;
    }

}
int main(){
    cout<< minoftwo(34,67)<<endl;
    return 0;
}