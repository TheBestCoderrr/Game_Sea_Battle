#include <iostream>

#include "InitShipsInBoard.h"
#include "PrintShipsBoard.h"
#include "SetCoordinatePlayers.h"
#include "ChangeColAndPerevirkaCoordinate.h"
#include "HitOrMissAndFarb.h"
#include "WinnerPlayer.h"

using namespace std;
//Вивід меню
void ShowMenu()
{
	cout << "Menu:\n";
	cout << "0 - Exit\n";
	cout << "1 - Start the battle\n";
	cout << "2 - Markings\n";
	cout << "3 - Rules of the game\n";
	cout << "4 - Developers\n";
}

//Вивід самої гри
void StartGame(char BoardPlayer1[SIZEBOARD][SIZEBOARD],char BoardPlayer2[SIZEBOARD][SIZEBOARD],char BoardShipsPlayer1[SIZEBOARD][SIZEBOARD], 
	char BoardShipsPlayer2[SIZEBOARD][SIZEBOARD],short int RowPlayer1,short int RowPlayer2, char ColPlayer1, char ColPlayer2,short int ColPlayer1Index,
	short int ColPlayer2Index,short  int CountSunkenCellPlayer1 = 0, short int CountSunkenCellPlayer2 = 0)
{
	cout << "Start!\n";

	InitBoard(BoardPlayer1);
	InitBoard(BoardPlayer2);
	InitBoard(BoardShipsPlayer1);
	InitBoard(BoardShipsPlayer2);

	InitShipsInBoard(BoardShipsPlayer1);
	InitShipsInBoard(BoardShipsPlayer2);

	cout << "     Ships Player 1: \n" << endl;
	PrintBoardsWithShips(BoardShipsPlayer1);
	cout << "     Ships Player 2: \n" << endl;
	PrintBoardsWithShips(BoardShipsPlayer2);
	cout << endl;

	while (true) {
		while (true) {
			cout << "Player 1 enter coordinate" << endl;
			ColPlayer1 = SetCol();
			RowPlayer1 = SetRow();

			RowPlayer1--;
			ColPlayer1Index = ChangeColPlayer(ColPlayer1);

			if (PerevirkaNaCoordinate(BoardPlayer2, RowPlayer1, ColPlayer1Index) == false) {
				cout << "\nYou shoot in this cell!" << endl;
				continue;
			}

			ChangeSymbolInCell(BoardPlayer2, BoardShipsPlayer2, RowPlayer1, ColPlayer1Index);

			cout << endl << "     Board Player 2\n" << endl;
			PrintBoards(BoardPlayer2);

			CountSunkenCellPlayer2 += CountSunkenCell(BoardShipsPlayer2, RowPlayer1, ColPlayer1Index);

			if (HitOrMiss(BoardShipsPlayer2, RowPlayer1, ColPlayer1Index) == false || CountSunkenCellPlayer2 == 20)
				break;
		}

		if (WinnerPlayer(CountSunkenCellPlayer2)) {
			cout << "Player 1 Winner!" << endl;
			break;
		}



		while (true) {
			cout << "Player 2 enter coordinate" << endl;
			ColPlayer2 = SetCol();
			RowPlayer2 = SetRow();

			RowPlayer2--;
			ColPlayer2Index = ChangeColPlayer(ColPlayer2);

			if (PerevirkaNaCoordinate(BoardPlayer1, RowPlayer2, ColPlayer2Index) == false) {
				cout << "\nYou shoot in this cell!" << endl;
				continue;
			}

			ChangeSymbolInCell(BoardPlayer1, BoardShipsPlayer1, RowPlayer2, ColPlayer2Index);

			cout << endl << "     Board Player 1\n" << endl;
			PrintBoards(BoardPlayer1);

			CountSunkenCellPlayer1 += CountSunkenCell(BoardShipsPlayer1, RowPlayer2, ColPlayer2Index);

			if (HitOrMiss(BoardShipsPlayer1, RowPlayer2, ColPlayer2Index) == false || CountSunkenCellPlayer1 == 20)
				break;
		}

		if (WinnerPlayer(CountSunkenCellPlayer1)) {
			cout << "Player 2 Winner!" << endl;
			break;
		}
	}
}
//Вивід знаків
void ShowMarks()
{
	cout << "\t  Markings:\n'.' - Sea;\n'O' - Ship;\n'!' - Miss;\n'X' - Hit in ship;\n'#' - Destroyed ship;\n" << endl;
}
//Вивід правил гри
void ShowRules()
{
	cout << endl;
	cout << "Rules of the game:\n";
	cout << "Each player has a fleet of ships and takes turns to try and sink" << endl;
	cout << "the other side`s ships by firing missiles at them. The player" << endl;
	cout << "that successfully sinks an entire fleet wins the game." << endl;
	cout << "!The game ends when all ships are sunk on one side!" << endl;
}
//Вивід розробників
void ShowDevelopers()
{
	cout << "\t Developers:\n 1. Mykhailo Romanovych Sydoruk;\n 2. Vitaliy Oleksandrovych Kostiukevych\n 3. Andriy Andriyowych Veselovskiy\n 4. Zdikhovsky Stanislav Yuriyovych\n 5. Maksym Olehovych Mozoluk\n 6. Savva Dmytrovych Kasyanov\n 7. Kurban Maria Andriivna\n 8. Romanuk Denis Igorovich\n" << endl;
}

