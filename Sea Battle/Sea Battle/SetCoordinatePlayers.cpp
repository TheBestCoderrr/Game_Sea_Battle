#include <iostream>

#define SIZEBOARD 10

using namespace std;
//‘ункц≥њ €к≥ прпиймають координати гравц€ та перев≥р€ють чи вони правильн≥
int SetRow() {
	int RowPlayer;
	while (true) {
		cout << "Enter Row (1, " << SIZEBOARD << "): ";
		cin >> RowPlayer;
		if (RowPlayer > 0 && RowPlayer <= SIZEBOARD)
			break;
		else 
			cout << "Invalid Coordinate!" << endl;
	}
	return RowPlayer;
}

char SetCol() {
	char ColPlayer;
	while (true) {
		cout << "Enter Col (A, J): ";
		cin >> ColPlayer;
		if (ColPlayer >= 'A' && ColPlayer <= 'J')
			break;
		else 
			cout << "Invalid Coordinate!" << endl;
	}
	return ColPlayer;
}