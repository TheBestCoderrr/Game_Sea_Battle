#define SIZEBOARD 10

bool HitOrMiss(char Board[SIZEBOARD][SIZEBOARD], int RowPlayer, int ColPlayer);

bool IsSunkenShip(char BoardPlayer[SIZEBOARD][SIZEBOARD], char BoardShip[SIZEBOARD][SIZEBOARD], int RowPlayer, int ColPlayer);

void FarbSunkenShip(char BoardPlayer[SIZEBOARD][SIZEBOARD], char BoardShip[SIZEBOARD][SIZEBOARD],int RowPlayer, int ColPlayer);

void ChangeSymbolInCell(char BoardPlayer[SIZEBOARD][SIZEBOARD], char BoardShip[SIZEBOARD][SIZEBOARD], int RowPlayer, int ColPlayer);
