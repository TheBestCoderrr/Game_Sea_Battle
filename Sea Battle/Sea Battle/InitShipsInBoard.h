#define SIZEBOARD 10

void InitBoard(char Board[SIZEBOARD][SIZEBOARD]);

void OutlineSingleShip(char arr[SIZEBOARD][SIZEBOARD], int i, int a, int b, int x, int y);

void CreateDoubleShip(char arr[SIZEBOARD][SIZEBOARD], int x, int y, int y1, int x1);

void InitShipsInBoard(char arr[SIZEBOARD][SIZEBOARD]);
