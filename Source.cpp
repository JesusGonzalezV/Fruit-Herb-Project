#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <stdio.h>
using namespace std;

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

void fruitClass() {
	string line;
	
	int option;
	cout << "Choose a fruit to view:\n1.Apple\n2.Orange\n3.Banana\n4.Mango\n";
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

void customerOrder() {
	string searchOrder;
	string line;
	cout << "Enter the customer's order number: ";
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
}

void modifyFruitHerb() {
	string stock, ID, date, fruitName, herbName;
	int option;
	
	cout << "Please choose an option :\n1.Modify fruit\n2.Modify herb\n";
	cin >> option;
	if (option == 1){
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

void adminUserInterface() {
	int choiceNum;
	cout << "Please choose an option:\n" << endl
		<< "1.Modify or add fruit/herb\n2.Check inventory\n";
	cin >> choiceNum;
	if (choiceNum == 1) 
		modifyFruitHerb();
	else if (choiceNum == 2)
		inventory();
}

string userNameVerification(string userName) {
	while (true) {
		if (userName == "admin")
			adminUserInterface();
		else
			cout << "Please try again: ";
		cin >> userName;
	}
}

void staffUserInterface() {
	int option;
	cout << "Welcome to the staff user interface" << endl;
	cout << "Choose an option:\n1.Check inventory\n2.Search inventory\n3.Customer order\n";
	cin >> option;
	if (option == 1)
		inventory();
	else if (option == 2)
		searchInventory();
	else if (option == 3)
		customerOrder();
}

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
