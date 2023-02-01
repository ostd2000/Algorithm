#include <iostream>

using namespace std;

int main() {
  int a1[101][101];
  int* p1[101];

  for(int i = 0; i <= 100; i++){
    p1[i] = a1[i] + 50;
  }

  int** pp1 = p1 + 50;

  pp1[-10][-10] = 10;

  cout << "1. " << pp1[-10][-10] << endl;

  return 0;
}
