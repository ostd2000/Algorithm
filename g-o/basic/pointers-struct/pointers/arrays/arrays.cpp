#include <iostream>

using namespace std;

int main() {
  int a1[10];

  // An array, in fact is a pointer to its first position's address.
  // These two lines are identical.
  cout << "1. " << a1 << endl;
  cout << "2. " << &a1[0] << endl;
  
  // An array's positions have consecutive memory addresses.
  // a + 1 in case of an int array means, from the starting memory address
  // move 4 bytes forward.
  cout << "3. " << &a1[1] << endl;
  cout << "4. " << a1 + 1 << endl;

  // These are all the same.
  a1[0] = 2;
  cout << "5. " << a1[0] << endl;

  *(a1 + 0) = 2;
  cout << "6. " << a1[0] << endl;

  cout << "7. " << *(a1 + 0) << endl;

  // Fun fact.
  // a2[i] = *(a2 + i) = *(i + a2) = i[a2]
  int a2[10];

  a2[0] = 10;

  cout << "8. " << a2[0] << endl;
  cout << "9. " << 0[a2] << endl; 

  return 0;
}
