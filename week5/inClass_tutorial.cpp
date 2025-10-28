#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	string name;
	bool isPauStudent;
	int course;
	
	cout << "Enter Full Name: ";
	getline(cin, name);  
	
	cout << "Is PAU student (Enter 1 for True or 0 for False): ";
	int flag;
	cin>>flag;
	isPauStudent = (flag != 0);
	
	cout<< "Enter Course (1-5): \n" << "\t1. Photography\n"
	    << "\t2. Photography\n" << "\t3. Fish Farming\n" << "\t4. Bnking\n" 
		<< "\t5. Public Speaking\n" << "Enter here: " ;
	cin >> course;
	
	cout<< "Enter Location (1-5): \n" << "\t1. Camp House A\n"
	    << "\t2. Camp House B\n" << "\t3. Camp House C\n" << "\t4. Camp House D\n" 
		<< "\t5. Camp House E\n" << "Enter here: " ;
	cin >> Location;
	
	//MAP Choices
	string courseName;
	int days = 0;
	double regFee = 0.0;
	
	if (course == 1){
		courseName = "Photography";
		days = 3;
		regFee = 10000; 
	}
	
	else if (course == 2){
		courseName = "Painting";
		days = 5;
		regFee = 8000;
	}
	
	else if (course == 3){
		courseName = "Fish Farming";
		days = 7;
		regFee = 15000;
	}
	
	else if (course == 4){
		courseName = "Baking";
		days = 5;
		regFee = 13000;
	}
	
	else if (course == 5){
		courseName = "Public Speaking";
		days = 2;
		regFee = 5000;
	}
	
 	else{
		cout << "Invalid Location Selection. \n";
	}
	
	
    // MAPPING LOCATION
	string locname;
	double lodgingperday = 0.0;
	int location;
	
	if (location == 1){
		locname = "Camp House A";
		lodgingperday = 10000;
	}
	
	else if (location == 2){
		locname = "Camp House B";
		lodgingperday = 2500;
	}
	
	else if (location == 3){
		locname = "Camp House C";
		lodgingperday = 5000;
	}
	
	else if (location == 4){
        locname = "Camp House D";
		lodgingperday = 13000;
    }
	
	else if (location == 5){
		locname = "Camp House E";
		lodgingperday = 5000;
	}
	
	else{
		cout << "Invalid Location Selection. \n";
	}
	
	//3 . Computing base cost
	double  lodgingCost = lodgingperday * days;
	
	//4. Decision Rules
	double lodgingdiscount = 0.0;
	
	if (isPauStudent && (location == 1 || location == 2)){
		lodgingdiscount = 0.05 * lodgingCost;
	}
	
	double lodgingAfter = lodgingCost - lodgingdiscount;
	
	// 4B.
	double regDiscount = 0.0;
	if((days > 5) || (regFee > 12000)){
		regDiscount = 0.03 * regFee;
	}
	
	double regFeeAfter = regFee - regDiscount;
	
	//5 Random Promo
	srand(time(0));
	int r = (rand()%100) + 1;
	double promo = 0.0;
	if (r == 7 || r == 77){
		promo = 500;
	}
	
	double total = regFeeAfter + lodgingAfter - promo;
	
	// OUTPUT
	cout << "Name: " << name << endl;
	cout << "PAU Student: " << (isPauStudent ? "YES" : "NO") << "\n";
	cout << "Course Name: " << courseName << endl;
	cout << "Number of days: " << days << endl;
	cout << "Reg Fee: " << regFee << endl;
	cout << "Reg Fee After Discount: " << regFeeAfter << endl;
	cout << "Location Name: " << locname << endl;
	cout << "Lodging Per Day: " << lodgingperday << endl;
	cout << "Total lodging Cost: " << lodgingCost << endl;
	cout << "Lodging After Discount: " << lodgingAfter << endl;
	cout << "Promo Code: " << r << endl;
	cout << "==============" << endl;
	
	cout << "Total Cost: " << total << endl;
	
	return 0;
}