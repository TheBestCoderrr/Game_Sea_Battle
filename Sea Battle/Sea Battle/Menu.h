#pragma once

#define SIZEBOARD 10

void ShowMenu();

void StartGame(char BoardPlayer1[SIZEBOARD][SIZEBOARD], char BoardPlayer2[SIZEBOARD][SIZEBOARD], char BoardShipsPlayer1[SIZEBOARD][SIZEBOARD],
	char BoardShipsPlayer2[SIZEBOARD][SIZEBOARD], int RowPlayer1, int RowPlayer2, char ColPlayer1, char ColPlayer2, int ColPlayer1Index,
	int ColPlayer2Index, int CountSunkenCellPlayer1 = 0, int CountSunkenCellPlayer2 = 0);

void ShowMarks();

void ShowRules();

void ShowDevelopers();

