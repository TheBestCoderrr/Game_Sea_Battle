#include <iostream>

#define SIZEBOARD 10

using namespace std;

//Вивід поля гравців
void PrintBoards(char Board[SIZEBOARD][SIZEBOARD]) {
	cout << "    ";
	for (int i = 0; i < SIZEBOARD; i++) {
		cout << char(('A' + i)) << " ";
	}
	cout << endl;

	cout << "   ---------------------" << endl;

	for (int i = 0; i < SIZEBOARD; i++) {
		cout << i+1;
		if (i < 9) {
			cout << "  |";
		}
		else {
			cout << " |";
		}
		for (int j = 0; j < SIZEBOARD; j++) {
			cout << Board[i][j] << " ";
		}
		cout << endl;
	}

	cout << "   ---------------------\n" << endl;
}

//Вивід поля гравців з кораблями
void PrintBoardsWithShips(char BoardShips[SIZEBOARD][SIZEBOARD]) {
	cout << "    ";
	for (int i = 0; i < SIZEBOARD; i++) {
		cout << char(('A' + i)) << " ";
	}
	cout << endl;

	cout << "   ---------------------" << endl;

	for (int i = 0; i < SIZEBOARD; i++) {
		cout << i+1;
		if (i < 9) {
			cout << "  |";
		}
		else {
			cout << " |";
		}
		for (int j = 0; j < SIZEBOARD; j++) {
			if (BoardShips[i][j] == '!')
				BoardShips[i][j] = '.';
			cout << BoardShips[i][j] << " ";
		}
		cout << endl;
	}

	cout << "   ---------------------\n" << endl;
}