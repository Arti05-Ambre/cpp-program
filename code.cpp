#include<iostream>
using namespace std;
int main() {
  int a = 10;
  int b = a++;
  cout<< "b ="<<b << endl;
  cout << "a ="<<a;

  int c = 10;
  int d = ++c;
  cout<< "d ="<<d<< endl;
  cout << "c ="<<c<<endl;

  int  p= 10;
  int q = p--;
  cout<< "q ="<<q << endl;
  cout << "p ="<<p;

  int x = 10;
  int y = ++x;
  cout<< "y ="<<y << endl;
  cout << "x ="<<x;


    return 0;
}