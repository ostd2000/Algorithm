#include <iostream>

using namespace std;

int main() {
  int v1 = 10;
  int v2 = 20;
  
  // The addresses asigned to these variables are usually consecutive.
  cout << "1. " << &v1 << endl;
  cout << "2. " << &v2 << endl;

    // We can store addresses.
  int* p1 = &v1;

  cout << "3. " << p1 << endl;

  // *p1 gives us the actual content stored in that address.
  cout << "4. " << *p1 << endl;

  // If we change the *p1 value, everything that points to that address
  // in this case v1 is going to change.
  *p1 = 20;

  cout << "5. " << *p1 << endl;
  cout << "6. " << v1 << endl;

  // The address of v1 is in the p1 right now
  // but we can even get the address of that.
  cout << "7. " << &p1 << endl;

  // We can store that address as well
  int** pp1 = &p1;

  return 0;
}
