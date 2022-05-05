#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
using namespace std;

void modifyFruitHerb() {
	cout << "Please choose an option:" << endl
		<< "1.Modify fruit\n2.Modify herb\n";

}

void inventory() {
	int option, option2;
	string line;
	cout << "Choose an inventory option:\n ";
	cout << "1.Fruit\n2.Herb\n";
	cin >> option;
	ifstream myfile, myfile1;
	myfile.open("apple.txt");
	myfile1.open("orange.txt");

	switch (option) {
		case 1:
			cout << "Choose a fruit to view:\n1.Apple\n2.Orange";
			cin >> option2;
			switch (option2) {
				case 1:
					if (myfile.is_open())
					{
						while (getline(myfile, line))
						{
						cout << line << '\n';
						}
					myfile.close();
					}
				case 2: 
					if (myfile1.is_open())
					{
						while (getline(myfile1, line))
						{
							cout << line << '\n';
						}
						myfile1.close();
					}
			}
		case 2:
			cout << "Choose a herb to view: ";
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
