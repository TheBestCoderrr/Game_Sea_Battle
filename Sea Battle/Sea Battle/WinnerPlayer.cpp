#include "HitOrMissAndFarb.h"

#define SIZEBOARD 10
//ʳ������ ������ �������
short int CountSunkenCell(char BoardShip[SIZEBOARD][SIZEBOARD],int RowPlayer,int ColPlayer) {
	int CountSunkenCell = 0;
	if (HitOrMiss(BoardShip, RowPlayer, ColPlayer))
		CountSunkenCell++;	
	return CountSunkenCell;
}
//��� ������ ������� �� ������
bool WinnerPlayer(int CountSunkenCell) {
	return CountSunkenCell == 20 ? true : false;
}