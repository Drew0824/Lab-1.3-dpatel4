#include <iostream>

using namespace std;

int main() {
  
  float number;
	int divider;
	
	divider = 2;
	
	cout << "Hi there\n";
	cout << "Please input a number and then hit return\n";
	cin  >> number;
	
	number = number / divider;
	
	cout << "Half of your number is " << number << endl;
  
}