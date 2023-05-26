#pragma once

#define SIZEBOARD 10

void ShowMenu();

void StartGame(char BoardPlayer1[SIZEBOARD][SIZEBOARD], char BoardPlayer2[SIZEBOARD][SIZEBOARD], char BoardShipsPlayer1[SIZEBOARD][SIZEBOARD],
	char BoardShipsPlayer2[SIZEBOARD][SIZEBOARD],short int RowPlayer1,short int RowPlayer2, char ColPlayer1, char ColPlayer2,short int ColPlayer1Index,
	short int ColPlayer2Index,short int CountSunkenCellPlayer1 = 0,short int CountSunkenCellPlayer2 = 0);

void ShowMarks();

void ShowRules();

void ShowDevelopers();

