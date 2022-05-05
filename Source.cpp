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
#include <iomanip>
#include <fstream>
#include <string>
#include <string.h>
#include <stdio.h>


using namespace std;

// herbClass function records the user's input for which fruit to view.
void herbClass() {
	string line;

	int option;
	cout << "Choose a herb to view:\n1.Basil\n2.Cilantro\n3.Garlic\n4.Parsley\n";
	cin >> option;

	if (option == 1) {
		ifstream myfile;
		myfile.open("basil.txt");
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
		myfile1.open("cilantro.txt");
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
	else if (option == 3)
	{
		ifstream myfile2;
		myfile2.open("garlic.txt");
		if (myfile2.is_open())
		{
			char mychar;
			while (myfile2) {
				mychar = myfile2.get();
				std::cout << mychar;
			}
			myfile2.close();
		}
	}
	else if (option == 4)
	{
		ifstream myfile3;
		myfile3.open("parsley.txt");
		if (myfile3.is_open())
		{
			char mychar;
			while (myfile3) {
				mychar = myfile3.get();
				std::cout << mychar;
			}
			myfile3.close();
		}
	}
}

// fruitClass function records the user's input for which fruit to view.
void fruitClass() {
	string line;

	int option;
	cout << right << setw(85) << "---------------------------------------------------" << endl;
	cout << right << setw(70) << "Choose a fruit to view:" << endl;
	cout << right << setw(63) << "1. Apple" << endl;
	cout << right << setw(64) << "2. Orange" << endl;
	cout << right << setw(64) << "3. Banana" << endl;
	cout << right << setw(63) << "4. Mango" << endl;
	cout << right << setw(85) << "---------------------------------------------------" << endl;

	cin >> option;

	if (option == 1) {
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
	else if (option == 3)
	{
		ifstream myfile2;
		myfile2.open("banana.txt");
		if (myfile2.is_open())
		{
			char mychar;
			while (myfile2) {
				mychar = myfile2.get();
				std::cout << mychar;
			}
			myfile2.close();
		}
	}
	else if (option == 4)
	{
		ifstream myfile3;
		myfile3.open("mango.txt");
		if (myfile3.is_open())
		{
			char mychar;
			while (myfile3) {
				mychar = myfile3.get();
				std::cout << mychar;
			}
			myfile3.close();
		}
	}
	
}

// inventory function allows the user choose which inventory to see.
void inventory() {

	int option;

	cout << right << setw(85) << "---------------------------------------------------" << endl;
	cout << right << setw(75) << "Choose an inventory option: " << endl;
	cout << right << setw(64) << "1. Fruit" << endl;
	cout << right << setw(63) << "2. Herb" << endl;
	cout << right << setw(85) << "---------------------------------------------------" << endl;
	cout << endl;
	cin >> option;

	if (option == 1) {

		fruitClass();
	}
	else if (option == 2) {

		herbClass();
	}
	else {
		while (option != 1 && option != 2) {
			cout << "Error. A valid option must be "
				<< "chosen." << endl;
			cin.clear();
			cin.ignore(1200, '\n');
			cin >> option;
		}
	}

}

/* searchInventory function allows the customer to search for a fruit or
   herb name.
*/
void searchInventory() {
	string searchItem;
	string line;
	cout << endl;
	cout << "Enter the name of the fruit or herb: \n";
	cout << endl;
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
	cout << endl;
}

// customerOrder function allows the customer to view an order placed.
void customerOrder() {
	string searchOrder;
	string line;
	cout << "Enter the customer's order number: ";
	cout << endl;
	cin >> searchOrder;
	ifstream myfile;
	myfile.open(searchOrder);
	if (myfile.is_open())
	{
		char mychar;
		while (myfile) {
			mychar = myfile.get();
			std::cout << mychar;
		}
		myfile.close();
	}
	cout << endl;
}

// modifyFruitHerb function allows the user choose which fruit to modify.
void modifyFruitHerb() {
	string stock, ID, date, fruitName, herbName;
	int option;

	cout << right << setw(85) << "---------------------------------------------------" << endl;
	cout << right << setw(72) << "Please choose an option: " << endl;
	cout << right << setw(66) << "1. Modify fruit" << endl;
	cout << right << setw(65) << "2. Modify herb" << endl;
	cout << right << setw(85) << "---------------------------------------------------" << endl;

	cin >> option;
	if (option == 1) {
		cout << "Enter the fruit you want to add: ";
		cin >> fruitName;
		ofstream myfile(fruitName);
		cout << "Enter stock number: ";
		cin >> stock;
		cout << "Enter fruit ID: ";
		cin >> ID;
		cout << "Enter date: ";
		cin >> date;
		myfile << "Total stock: ";
		myfile << stock;
		myfile << "\nFruit ID: ";
		myfile << ID;
		myfile << "\nDate added: ";
		myfile << date;
		myfile.close();
	}
	else {
		cout << "Enter the herb you want to add: ";
		cin >> herbName;
		ofstream myfile1(herbName);
		cout << "Enter stock number: ";
		cin >> stock;
		cout << "Enter herb ID: ";
		cin >> ID;
		cout << "Enter date: ";
		cin >> date;
		myfile1 << "Total stock: ";
		myfile1 << stock;
		myfile1 << "\nHerb ID: ";
		myfile1 << ID;
		myfile1 << "\nDate added: ";
		myfile1 << date;
		myfile1.close();
	}
}

// adminUserInterface function allows the admin to modify or add a fruit.
void adminUserInterface() {

	int choiceNum;

	cout << right << setw(85) << "---------------------------------------------------" << endl;
	cout << right << setw(71) << "Please choose an option:" << endl;
	cout << right << setw(73) << "1. Modify or add fruit/herb " << endl;
	cout << right << setw(68) << "2. Check inventory" << endl;
	cout << right << setw(85) << "---------------------------------------------------" << endl;
	cout << endl;

	cin >> choiceNum;

	if (choiceNum == 1)
		modifyFruitHerb();
	else if (choiceNum == 2)
		inventory();
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

// customerUserInterface function allows customer to choose between options.
void customerUserInterface() {

	int option;

	cout << right << setw(85) << "---------------------------------------------------" << endl;
	cout << right << setw(80) <<  "Welcome to the staff user interface!" << endl;
	cout << right << setw(70) << "Choose an option: " << endl;
	cout << right << setw(71) << "1. Check inventory" << endl;
	cout << right << setw(72) << "2. Search inventory" << endl;
	cout << right << setw(70) << "3. Customer order" << endl;
	cout << right << setw(85) << "---------------------------------------------------" << endl;

	cin >> option;

	if (option == 1)
		inventory();
	else if (option == 2)
		searchInventory();
	else if (option == 3)
		customerOrder();
}

/* main function will present the first set of options for either the
   customer or the admin.
*/
int main() {

	string userName;
	int choiceNum;
	
	cout << right << setw(85) << "---------------------------------------------------" << endl;
	cout << right << setw(84) << "Welcome to the Online Herb Software Application!" << endl;
	cout << endl;
	cout << right << setw(71) << "Please choose an option:" << endl;
	cout << endl;
	cout << right << setw(65) << "1. Admin login" << endl;
	cout << right << setw(71) << "2. Staff user interface" << endl;
	cout << right << setw(85) << "---------------------------------------------------" << endl;
	cin >> choiceNum;
 
	while (choiceNum != 1 && choiceNum != 2)
	{
		cout << "Error. A valid option must be "
			<< "chosen." << endl;
		cin.clear();
		cin.ignore(1200, '\n');
		cin >> choiceNum;
	}

	switch (choiceNum) {
	case 1:
		cout << endl;
		cout << "Please enter admin username: \n";
		cin >> userName; 
		cout << endl;
		cout << userNameVerification(userName);
	case 2:
		customerUserInterface();
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
