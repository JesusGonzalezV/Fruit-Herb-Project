#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
using namespace std;

void herbClass() {

}

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

void modifyFruitHerb() {
	cout << "Please choose an option:" << endl
		<< "1.Modify fruit\n2.Modify herb\n";

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
