#include <iostream>
#include <time.h>

#include "Menu.h"

#define SIZEBOARD 10

using namespace std;

int main() {
	srand(time(NULL));

	cout << "\tSea Battle\n" << endl;
	//���� ���� �������
	char BoardPlayer1[SIZEBOARD][SIZEBOARD], BoardPlayer2[SIZEBOARD][SIZEBOARD];
	//���� ������� � ���������� ���������
	char BoardShipsPlayer1[SIZEBOARD][SIZEBOARD], BoardShipsPlayer2[SIZEBOARD][SIZEBOARD];

	//���� ��� ���������� ��������� �������
	short int RowPlayer1 = NULL, RowPlayer2 = NULL;
	char ColPlayer1 = NULL, ColPlayer2 = NULL;

	//������ ��� ������ � ������� ����������
	short int ColPlayer1Index = NULL, ColPlayer2Index = NULL;

	//ʳ������ ���������� ������� � �������
	short int CountSunkenCellPlayer1 = NULL, CountSunkenCellPlayer2 = NULL;

	//����
	short int choice;

	do {
		ShowMenu();
		cout << "\nEnter your choice: ";
		cin >> choice;

		switch (choice)
		{
		case 0:
			cout << "Goodbye!\n";
			break;
		case 1:
			StartGame(BoardPlayer1, BoardPlayer2, BoardShipsPlayer1, BoardShipsPlayer2, RowPlayer1, RowPlayer2, ColPlayer1, 
			ColPlayer2, ColPlayer1Index, ColPlayer2Index, CountSunkenCellPlayer1, CountSunkenCellPlayer2);
			CountSunkenCellPlayer1 = 0;
			CountSunkenCellPlayer2 = 0;
			break;
		case 2:
			ShowMarks();
			break;
		case 3:
			ShowRules();
			break;
		case 4:
			ShowDevelopers();
			break;
		default:
			cout << "Error! Enter correct option.\n";
		}

		cout << endl;
	} while (choice != 0);

	return 0;
}
