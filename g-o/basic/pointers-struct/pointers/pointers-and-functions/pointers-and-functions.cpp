#include <iostream>

using namespace std;

void f1(int a) {
  a = 20;
}

void f2(int& a) {
  a = 20;
}

int main(){
 int v1;
 v1 = 10;

  // Function f1() will not change the value of v1,
  // it creates a copy of v1 and changes the value of that copy. 
  f1(v1);
  cout << "1. " << v1 << endl;

  // Function f2() will change the value of v1,
  // because it takes the address of v1 and changes the value that resides in that address.
  f2(v1);
  cout << "2. " << v1 << endl;

  return 0;
}
