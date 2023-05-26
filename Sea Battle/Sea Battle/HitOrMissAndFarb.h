#define SIZEBOARD 10

bool HitOrMiss(char Board[SIZEBOARD][SIZEBOARD],short int RowPlayer,short int ColPlayer);

bool IsSunkenShip(char BoardPlayer[SIZEBOARD][SIZEBOARD], char BoardShip[SIZEBOARD][SIZEBOARD],short int RowPlayer,short int ColPlayer);

void FarbSunkenShip(char BoardPlayer[SIZEBOARD][SIZEBOARD], char BoardShip[SIZEBOARD][SIZEBOARD],short int RowPlayer,short int ColPlayer);

void ChangeSymbolInCell(char BoardPlayer[SIZEBOARD][SIZEBOARD], char BoardShip[SIZEBOARD][SIZEBOARD], short int RowPlayer, short int ColPlayer);
