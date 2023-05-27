#define SIZEBOARD 10

void InitBoard(char Board[SIZEBOARD][SIZEBOARD]);

void CreateTripleShip(char arr[SIZEBOARD][SIZEBOARD],short int x, short int y, short int y1, short int x1, short int y2, short int x2);

void CreateQuaternaryShip(char arr[SIZEBOARD][SIZEBOARD], short int x, short int y, short int y1, short int x1, short int y2, short int x2, 
	short int y3, short int x3);

void CreateDoubleShip(char arr[SIZEBOARD][SIZEBOARD], short int x, short int y, short int y1, short int x1);

void CreateSingleShip(char arr[SIZEBOARD][SIZEBOARD], short int x, short int y);

void InitShipsInBoard(char arr[SIZEBOARD][SIZEBOARD]);


