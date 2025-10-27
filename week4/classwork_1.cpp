#include <iostream>
using namespace std;

int main () {	
	 int num;
	 cout << "Enter an integer: ";
     cin >> num;
   
	if (num % 5 == 0){
		cout << "HiFive" << endl;
	}
	
	if  (num % 2 == 0) {
		cout << "HiEven";
	}
	
	return 0;
	 
}