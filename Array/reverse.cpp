 #include<iostream>
 #include<vector>
 using namespace std;
 int main(){
    vector<char>vec={'q','a','d','b','c'};
    cout<<"size of vector="<<vec.size()<<endl;
    for(char val:vec){
        cout<<val<<endl;
    }
    return 0;
 }
 
