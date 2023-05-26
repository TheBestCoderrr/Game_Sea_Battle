#pragma once
#define SIZEBOARD 10

short int CountSunkenCell(char BoardPlayer[SIZEBOARD][SIZEBOARD],short int RowPlayer,short int ColPlayer);

bool WinnerPlayer(short int CountSunkenCell);
