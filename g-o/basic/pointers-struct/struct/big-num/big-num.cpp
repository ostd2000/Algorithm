#include <iostream>

using namespace std;

struct Big {
  string s;
	
  Big() {
    s = "";
  }
	
  void operator = (int num) {
    while(num > 0) {
      // Converting a number to a character.
      char d = '0' + num % 10;
			
      // This won't work.
      // s += d;
			
      s = d + s;
			
      num /= 10;
    }
  }

  void operator += (Big b) {
    string s1 = s;
    string s2 = b.s;

    if(s1.size() < s2.size())
      swap(s1, s2);

    while(s2.size() < s1.size())
      // Inserts a 0 to the left of the string.
      s2 = '0' + s2;

    string sum = "";
    int d = 0;
    for(int i = s1.size() - 1; i >= 0; i--) {
      d = d + (s1[i] - '0') + (s2[i] - '0');

      char ch = '0' + d % 10;

      // Inserts the ch character in the left.
      sum = ch + sum;

      d /= 10;
    }
    
    // The reason for this is that when we get out of the loop
    // we have to do this operation one more time.
    if(d > 0) {
      char ch = '0' + d % 10;
      sum = ch + sum;
    }

    s = sum;
  }

  int size() {
    return s.size();
  }

  bool operator < (Big b) {
    if(s.size() < b.size()) 
      return true;

    if(s.size() > b.size())
      return false;

    if(s < b.s)
      return true;

    return false;
  }
};

int main() {
  // int: 32 bits: 4 bytes: -2^31 ... (2^31)-1 or -2*(10^9) ... 2*(10^9)
  // long long: 64 bits: 8 bytes: -2^63 ... (2^63)-1 or -9*(10^18) ... 9*(10^18)
  // What if we wanna work with bigger numbers ?
	
  Big v1;
  v1 = 10;
	
  cout << "1. " << v1.s << endl;

  Big v2, v3;
  v2 = 15;
  v3 = 25;
  
  v2 += v3;
  cout << "2. " << v2.s << endl;

  cout << "3. " << v2.size() << endl;


  Big v4, v5;
  v4 = 15;
  v5 = 25;

  if(v4 < v5)
    cout << "4. " << "v4 < v5" << endl;

  return 0;
} 
