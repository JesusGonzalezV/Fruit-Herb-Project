/*
-------------------------------------------------------------------------------

Purpose: The purpose of the Online Herbs Software Applicationis to help users 
gain more information on curing different types of diseases by listing different
fruits and herbs that they should consume.
Authors: Jesus Gonzalez, Francisco Campuzano, Justin Reed
Date: 5/5/2022
Course: Software Engineering, Prof. Yilmaz, CS_3321

-------------------------------------------------------------------------------
*/




#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
using namespace std;

void herbClass() {

}

// fruitClass function records the user's input for which fruit to view.
void fruitClass() {
	string line;
	
	int option;
	cout << "Choose a fruit to view:\n1.Apple\n2.Orange\n";
	cin >> option;
	
	if(option == 1)	{
			ifstream myfile;
			myfile.open("apple.txt");
			if (myfile.is_open())
			{
				char mychar;
				while (myfile) {
					mychar = myfile.get();
					std::cout << mychar;
				}
				myfile.close();
			}
	}
	else if (option == 2)
	{
			ifstream myfile1;
			myfile1.open("orange.txt");
			if (myfile1.is_open())
			{
				char mychar;
				while (myfile1) {
					mychar = myfile1.get();
					std::cout << mychar;
				}
				myfile1.close();
			}
	}

}

// modifyFruitHerb function allows the user choose which fruit to modify.
void modifyFruitHerb() {
	cout << "Please choose an option:" << endl
		<< "1.Modify fruit\n2.Modify herb\n";

}

// inventory function allows the user choose which inventory to see.
void inventory() {
	int option;
	cout << "Choose an inventory option:\n";
	cout << "1.Fruit\n2.Herb\n";
	cin >> option;

	switch (option) {
	case 1:
		fruitClass();
		
	case 2:
		herbClass();
	}


}

/* searchInventory function allows the customer to search for a fruit or 
   herb name.
*/ 
void searchInventory() {
	string searchItem;
	string line;
	cout << "Enter the name of the fruit or herb: ";
	cin >> searchItem;
	ifstream myfile;
	myfile.open(searchItem);
	if (myfile.is_open())
	{
		char mychar;
		while (myfile) {
			mychar = myfile.get();
			std::cout << mychar;
		}
		myfile.close();
	}
}

// adminUserInterface function allows the admin to modify or add a fruit.
void adminUserInterface() {
	int choiceNum;
	cout << "Please choose an option:\n" << endl
		<< "1.Modify or add fruit/herb\n2.Check inventory\n";
	cin >> choiceNum;
	switch (choiceNum) {
	case 1:
		modifyFruitHerb();
	case 2:
		inventory();
	}
}

// userNameVerification function verifies that the admin username is correct.
string userNameVerification(string userName) {
	while (true) {
		if (userName == "admin")
			adminUserInterface();
		else
			cout << "Please try again: ";
		cin >> userName;
	}
}

// staffUserInterface function allows staff to choose between options.
void staffUserInterface() {
	int option;
	cout << "Welcome to the staff user interface" << endl;
	cout << "Choose an option:\n1.Check inventory\n2.Search inventory\n3.Customer order\n";
	cin >> option;
	if (option == 1)
		inventory();
	else if (option == 2)
		searchInventory();
}

/* main function will present the first set of options for either the
   customer or the admin.
*/
int main() {
	string userName;
	int choiceNum;
	cout << "Please choose an option:" << endl
		<< "1.Admin login\n2.Staff user interface\n";
	cin >> choiceNum;
	switch (choiceNum) {
	case 1:
		cout << "Please enter admin username: ";
		cin >> userName;
		cout << userNameVerification(userName);
	case 2:
		staffUserInterface();
	}
	return 0;
}

/*
-------------------------------------------------------------------------------

Purpose: The purpose of the Online Herbs Software Applicationis to help users 
gain more information on curing different types of diseases by listing different
fruits and herbs that they should consume.
Authors: Jesus Gonzalez, Francisco Campuzano, Justin Reed
Date: 5/5/2022
Course: Software Engineering, Prof. Yilmaz, CS_3321

-------------------------------------------------------------------------------
*/
