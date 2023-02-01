#include <iostream>

using namespace std;

struct Car {
  string name;
  string company;
  int model;
	
  // Constructor
  Car() {
    model = 2020;
  }
	
  // Method
  string get_price() {
    if(model < 2020) return "50k";
		
    return "100k";
  }	
};

int main() {
  Car c1;
	
  cout << "1. " << c1.model << endl;
	
  c1.name = "X4";
  c1.company = "BMW";
  c1.model = 2023;
	
  cout << "2. " << c1.name << endl;
  cout << "3. " << c1.model << endl;	
  cout << "4. " << c1.get_price() << endl;
	
  return 0;
}
