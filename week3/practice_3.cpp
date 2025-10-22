#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double Principal;
	cout << "Enter Account Balance: ";
	cin >> Principal;
	
	double Rate;
	cout << "Intrest rate in %: ";
	cin >> Rate;
	
	double NewBalance = Principal * (1 + (Rate / 100)); // SI  A = P * (1+ R*T)
	cout << "Balance after one year = " << NewBalance << endl;
	
		
	double NewBalance2 = Principal * pow((1 + Rate/100), 2); // CP A = P * (1+R)**T
	cout << "Balance after two years = " << NewBalance2;
	
	
	
	return 0;
	
}