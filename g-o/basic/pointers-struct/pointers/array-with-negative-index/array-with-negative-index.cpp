#include <iostream>

using namespace std;

int main() {
  int a1[101];

  // Establishing a pointer to the middle position of the a1 array.
  int* p1 = a1 + 50;

  // p1[i] = *(p1 + i) = *(a1 + 50) = a1[50]
  // Now we can have negative indexing.
  p1[-10] = 10;

  cout << "1. " << p1[-10] << endl;

  return 0;
}
