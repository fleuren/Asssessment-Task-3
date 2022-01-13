//Program Type: Coffee Machine Console Program
//Program Details/Briefing: https://portal.ftcglobal.ae/pluginfile.php/33269/mod_resource/content/0/final%20code%20brief%20from%2010-14%20jan.pdf
#include <iostream>
#include <array>
#include <cmath>
#include <string>
using namespace std;

void drinkArray(){

string menu[4][4] = {
	{"Coffee","		Price (AED)","	Tea","		Price (AED)"},
	{"1. Ice Coffee","		3","		1. Ice Tea","	3"},
	{"2. Milk Coffee","		2","		2. Milk Tea","	2"},
	{"3. Black Coffee","		1","		3. Black Tea","	1"},
};
	for (int x = 0; x < 4; x++){
		for (int y = 0; y < 4; y++){
			cout << menu[x][y];
		}
	cout << endl;
	}
return;
}

int main(){
	drinkArray(); // displays drinkArray function
	char drinkClass;
	//code block for drink selection
	do
	{
	cout << "Please enter your desired drink, whether it is Coffee (c) or Tea (t)" << endl;
	cin >> drinkClass;
	}
	while (drinkClass != 'c' && drinkClass != 'C' && drinkClass != 't' && drinkClass != 'T'); // error-handling for drink selection

	
	//switch case for coffee options
	switch (drinkClass){	
		case 'c':
		case 'C':
		int resp1;
		char sc1;
		int price1;
		double money1;
		double cashRem1;
		cout << "You chose coffee" << endl;
		cout << "What type of Coffee do you prefer? (1 - Ice Coffee, 2 - Milk Coffee - 3 - Black Coffee)" << endl;
			cin >> resp1;

		while (cin.fail() || resp1 >= 4){	// error-handling for coffee options
			cout << "Please choose from the options, 1-3" << endl;
			cout << "Your option is: ";
			
			cin.clear();
			cin.ignore(1000, '\n');
			cin >> resp1;
		}
		if (resp1 == 1){
			cout << "Your chosen type of coffee is 'Ice Coffee'" << endl;
			price1 = 3;
		}else if (resp1 == 2){
			cout << "Your chosen type of coffee is 'Milk Coffee'" << endl;
			price1 = 2;
		}else{
			cout << "Your chosen type of coffee is 'Black Coffee'" << endl;	
			price1 = 1;
		}

	cout << "Do you want sugar with that? (Y/N): ";
		do{
			cout << "Please input Y - Yes / N - No: ";
			cin >> sc1;
		
		}while (sc1 != 'y' && sc1 != 'Y' && sc1 != 'n' && sc1 != 'N'); // error-handling for sugar selection


		if (sc1 == 'y' || sc1 == 'Y'){
			cout << "You have chosen to add sugar" << endl;
		}else if (sc1 == 'n' || sc1 == 'N'){
			cout << "You have chosen to not add sugar" << endl;
		}else{
			cout << "Invalid" << endl;
		}

		cout << "Please input your desired amount of cash for " << price1 << " AED worth of Coffee: ";
		cin >> money1;
		while (cin.fail() || money1 <= 0){	// error-handling for coffee options
			cout << "Please input a valid value" << endl;
			cout << "Your option is: ";
			
			cin.clear();
			cin.ignore(1000, '\n');
			cin >> money1;
		}
			cout << endl;
		cout << "| Results:" << endl;
		cout << "| Item price: " << price1 << endl;
		cout << "| Balance: " << money1 << endl;
		cashRem1 = money1 - price1;
		if (cashRem1 < 0){
			cashRem1 = 0;
		}
		cout << "| Change: " << cashRem1 << endl;
			cout << endl;
		cout << "| Transaction Complete!";		
		break;

		case 't':
		case 'T':
		int resp2;
		char sc2;
		int price2;
		double money2;
		double cashRem2;
		cout << "You chose tea" << endl;
		cout << "What type of Tea do you prefer? (1 - Ice Tea, 2 - Milk Tea - 3 - Black Tea)" << endl;
			cin >> resp2;

		while (cin.fail() || resp2 >= 4){
			cout << "Please choose from the options, 1-3" << endl;
			cout << "Your option is: " << endl;
			
			cin.clear();
			cin.ignore(1000, '\n');
			cin >> resp2;
		}
		if (resp2 == 1){
			cout << "Your chosen type of tea is 'Ice Tea'" << endl;
			price2 = 3;
		}else if (resp2 == 2){
			cout << "Your chosen type of tea is 'Milk Tea'" << endl;
			price2 = 2;
		}else{
			cout << "Your chosen type of tea is 'Black Tea'" << endl;	
			price2 = 1;
		}
		
	cout << "Do you want sugar with that? (Y/N): ";
		do{
			cout << "Please input Y - Yes / N - No: ";
			cin >> sc2;
		}while (sc2 != 'y' && sc2 != 'Y' && sc2 != 'n' && sc2 != 'N'); // error-handling for sugar selection
	
		if (sc2 == 'y' || sc2 == 'Y'){
			cout << "You have chosen to add sugar" << endl;
		}else if (sc2 == 'n' || sc2 == 'N'){
			cout << "You have chosen to not add sugar" << endl;
		}else{
			cout << "Invalid" << endl;
		}
		cout << "Please input your desired amount of cash for " << price2 << " AED worth of Coffee: ";
		cin >> money2;
		while (cin.fail() || money1 <= 0){	// error-handling for coffee options
			cout << "Please input a valid value" << endl;
			cout << "Your option is: ";
			
			cin.clear();
			cin.ignore(1000, '\n');
			cin >> money2;
		}
			cout << endl;
		cout << "| Results:" << endl;
		cout << "| Item price: " << price2 << endl;
		cout << "| Balance: " << money2 << endl;
		cashRem2 = money2 - price2;
		if (cashRem2 < 0){
			cashRem2 = 0;
		}
		cout << "| Change: " << cashRem2 << endl;
			cout << endl;
			cout << "Transaction Complete!";		
		break;

		default:
		cout << "Invalid" << endl;
		break;
		}
	return 0;
}