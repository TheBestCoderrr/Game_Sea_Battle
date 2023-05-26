#include "HitOrMissAndFarb.h"

#define SIZEBOARD 10
//Кількість збитих клітинок
short int CountSunkenCell(char BoardShip[SIZEBOARD][SIZEBOARD],short int RowPlayer,short int ColPlayer) {
	short int CountSunkenCell = 0;
	if (HitOrMiss(BoardShip, RowPlayer, ColPlayer))
		CountSunkenCell++;	
	return CountSunkenCell;
}
//Хто перший потопив всі кораблі
bool WinnerPlayer(short int CountSunkenCell) {
	return CountSunkenCell == 20 ? true : false;
}