#include <iostream>
#include <string>
#include <cstdlib>  
#include <ctime>   
#include <iomanip> 
using namespace std;

int main () {
	
	string name;
	cout << "Input name: " << name;
	getline(cin, name); 
	
	bool isPAUStudent;
	cout << "Is PAU Student? (Enter 1 if TRUE or Enter 0 if FALSE ==> )";
	int flag;
	cin >> flag;
	isPAUStudent = (flag !=0);
	
	// COURSE
	int days;
	int regFee;
	int courseChoice;
	string courseName;
	
	cout << "Enter Course (1-5): ";
	cin >> courseChoice;
	
	if (courseChoice == 1) {
		courseName = "Photography";
		days = 3;
		regFee = 10000;
	}
	
	else if (courseChoice == 2) {
		courseName = "Painting";
		days = 5;
		regFee = 8000;
   }
   
   else if (courseChoice == 3) {
   	courseName = "Fish Farming";
   	days = 7;
   	regFee = 15000;
   }
   
   else if (courseChoice == 4) {
   	courseName = "Baking";
   	days = 5;
   	regFee = 13000;
   }
   
    else if (courseChoice == 5) {
   	courseName = "Public Speaking";
   	days = 2;
   	regFee = 5000;
   }
   
   //ACCOMODATION
   int lodging_dayfee;
   int lodgingChoice;
   string location;
   
   cout << "Enter Location(1-5): ";
   cin >> lodgingChoice;
   
   if (lodgingChoice == 1) {
   	location = "Camp House A";
   	lodging_dayfee = 10000;
   }
   
   else if (lodgingChoice == 2) {
   	location = "Camp House B";
   	lodging_dayfee = 2500;
   }
   
   else if (lodgingChoice == 3) {
   	location = "Camp House C";
   	lodging_dayfee = 5000;
   }
   
    else if (lodgingChoice == 4) {
   	location = "Camp House D";
   	lodging_dayfee = 13000;
   }
   
    else if (lodgingChoice == 5) {
   	location = "Camp House E";
   	lodging_dayfee = 5000;
   }
   
   int lodgingCost = lodging_dayfee * days;
   cout << "Lodging Cost = " << lodgingCost << endl;
   int total = regFee + lodgingCost;
   cout << "Total Cost = " << total;
   
   // DISCOUNTS AND RANDOM PROMO
double lodgingDiscount = 0.0;
double regDiscount = 0.0;
int promo = 0;


if (isPAUStudent && (lodgingChoice == 1 || lodgingChoice == 2)) {
    lodgingDiscount = 0.05 * (lodging_dayfee * days);
    total -= lodgingDiscount;
    cout << "\nLodging Discount (5%): ?" << lodgingDiscount;
}


if (days > 5 || regFee > 12000) {
    regDiscount = 0.03 * regFee;
    total -= regDiscount;
    cout << "\nRegistration Discount (3%): ?" << regDiscount;
}


srand(time(0));
int r = rand() % 100 + 1;
if (r == 7 || r == 77) {
    promo = 500;
    total -= promo;
    cout << "\n?? Promo applied! ?" << promo << " off!";
}

cout << "\nRandom number: " << r;
cout << "\nFINAL TOTAL = ?" << total << endl;


   
   

}
