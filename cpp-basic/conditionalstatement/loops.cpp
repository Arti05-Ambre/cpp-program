#include <iostream>
using namespace std;

int main() {
    char ch;
    cout<<"Enter a ch"<<endl;
    cin >>ch;

    if (ch >=65 && ch <=90)
        cout << "Uppercase";
    else
        cout  << " is larger";

    return 0;
}