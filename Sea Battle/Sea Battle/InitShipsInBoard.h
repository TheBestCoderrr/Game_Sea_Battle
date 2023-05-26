#define SIZEBOARD 10

void InitBoard(char Board[SIZEBOARD][SIZEBOARD]);

void CreateTripleShip(char arr[SIZEBOARD][SIZEBOARD], int x, int y, int y1, int x1, int y2, int x2);

void CreateQuaternaryShip(char arr[SIZEBOARD][SIZEBOARD], int x, int y, int y1, int x1, int y2, int x2, int y3, int x3);

void CreateDoubleShip(char arr[SIZEBOARD][SIZEBOARD], int x, int y, int y1, int x1);

void CreateSingleShip(char arr[SIZEBOARD][SIZEBOARD], int x, int y);

void InitShipsInBoard(char arr[SIZEBOARD][SIZEBOARD]);


