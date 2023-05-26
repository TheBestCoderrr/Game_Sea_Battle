#pragma once
#define SIZEBOARD 10

short int CountSunkenCell(char BoardPlayer[SIZEBOARD][SIZEBOARD], int RowPlayer, int ColPlayer);

bool WinnerPlayer(int CountSunkenCell);
