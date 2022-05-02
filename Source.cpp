#include <iostream>
using namespace std;

void modifyFruitHerb() {
	cout << " ";
}

void inventory() {
	cout << "Choose an option: ";
}

void adminUserInterface() {
	int choiceNum;
	cout << "Please choose an option:" << endl 
		<< "1.Modify or add fruit/herb \n2.Check inventory\n";
	cin >> choiceNum;
	if (choiceNum == 1)
		modifyFruitHerb();
	if (choiceNum == 2)
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

int main(){
	string userName;
	cout << "Please enter admin username: ";
	cin >> userName;
	cout << userNameVerification(userName);

	return 0;
}