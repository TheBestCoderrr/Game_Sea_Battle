#include<stdlib.h>

#define SIZEBOARD 10

//функція для створення пустого поля
void InitBoard(char arr[SIZEBOARD][SIZEBOARD])
{
	for (int i = 0; i < SIZEBOARD; i++)
	{
		for (int j = 0; j < SIZEBOARD; j++)
			arr[i][j] = '.';
	}
}

//Створення тройного корабля
void CreateTripleShip(char arr[SIZEBOARD][SIZEBOARD], int x, int y, int y1, int x1, int y2, int x2)
{//розставлення тройного корабля
	arr[y][x] = 'O';
	arr[y1][x1] = 'O';
	arr[y2][x2] = 'O';
	//Розтавлення знаків оклику навколо тройних кораблів
	for (int i = y - 1; i <= y + 1; i++)//Для першої клітинки
	{
		for (int j = x - 1; j <= x + 1; j++)
		{
			if (i == -1 || j == -1)
				continue;
			if (i == SIZEBOARD || j == SIZEBOARD)
				continue;
			if (i == y && j == x)
				continue;
			if (i == y1 && j == x1)
				continue;
			if (i == y2 && j == x2)
				continue;
			arr[i][j] = '!';
		}
	}
	for (int i = y1 - 1; i <= y1 + 1; i++)//Для другої клітинки
	{
		for (int j = x1 - 1; j <= x1 + 1; j++)
		{
			if (i == -1 || j == -1)
				continue;
			if (i == SIZEBOARD || j == SIZEBOARD)
				continue;
			if (i == y && j == x)
				continue;
			if (i == y1 && j == x1)
				continue;
			if (i == y2 && j == x2)
				continue;
			arr[i][j] = '!';
		}
	}
	for (int i = y2 - 1; i <= y2 + 1; i++)//Для третьої клітинки
	{
		for (int j = x2 - 1; j <= x2 + 1; j++)
		{
			if (i == -1 || j == -1)
				continue;
			if (i == SIZEBOARD || j == SIZEBOARD)
				continue;
			if (i == y && j == x)
				continue;
			if (i == y1 && j == x1)
				continue;
			if (i == y2 && j == x2)
				continue;
			arr[i][j] = '!';
		}
	}
}
//Створення четверного корабля
void CreateQuaternaryShip(char arr[SIZEBOARD][SIZEBOARD], int x, int y, int y1, int x1, int y2, int x2, int y3, int x3)
{//розставлення четверного корабля
	arr[y][x] = 'O';
	arr[y1][x1] = 'O';
	arr[y2][x2] = 'O';
	arr[y3][x3] = 'O';
	//Розтавлення знаків оклику навколо тройних кораблів
	for (int i = y - 1; i <= y + 1; i++)//Для першої клітинки
	{
		for (int j = x - 1; j <= x + 1; j++)
		{
			if (i == -1 || j == -1)
				continue;
			if (i == SIZEBOARD
				|| j == SIZEBOARD)
				continue;
			if (i == y && j == x)
				continue;
			if (i == y1 && j == x1)
				continue;
			if (i == y2 && j == x2)
				continue;
			if (i == y3 && j == x3)
				continue;
			arr[i][j] = '!';
		}
	}
	for (int i = y1 - 1; i <= y1 + 1; i++)//Для другої клітинки
	{
		for (int j = x1 - 1; j <= x1 + 1; j++)
		{
			if (i == -1 || j == -1)
				continue;
			if (i == SIZEBOARD || j == SIZEBOARD)
				continue;
			if (i == y && j == x)
				continue;
			if (i == y1 && j == x1)
				continue;
			if (i == y2 && j == x2)
				continue;
			if (i == y3 && j == x3)
				continue;
			arr[i][j] = '!';
		}
	}
	for (int i = y2 - 1; i <= y2 + 1; i++)//Для третьої клітинки
	{
		for (int j = x2 - 1; j <= x2 + 1; j++)
		{
			if (i == -1 || j == -1)
				continue;
			if (i == SIZEBOARD || j == SIZEBOARD)
				continue;
			if (i == y && j == x)
				continue;
			if (i == y1 && j == x1)
				continue;
			if (i == y2 && j == x2)
				continue;
			if (i == y3 && j == x3)
				continue;
			arr[i][j] = '!';
		}
	}
	for (int i = y3 - 1; i <= y3 + 1; i++)//Для четвертої клітинки
	{
		for (int j = x3 - 1; j <= x3 + 1; j++)
		{
			if (i == -1 || j == -1)
				continue;
			if (i == SIZEBOARD || j == SIZEBOARD)
				continue;
			if (i == y && j == x)
				continue;
			if (i == y1 && j == x1)
				continue;
			if (i == y2 && j == x2)
				continue;
			if (i == y3 && j == x3)
				continue;
			arr[i][j] = '!';
		}
	}
}

//Створення двойного корабля
void CreateDoubleShip(char arr[SIZEBOARD][SIZEBOARD], int x, int y, int y1, int x1)
{//розставлення двойного корабля
	arr[y][x] = 'O';
	arr[y1][x1] = 'O';
	//Розтавлення знаків оклику навколо двойних кораблів
	for (int i = y - 1; i <= y + 1; i++)//Для першої клітинки
	{
		for (int j = x - 1; j <= x + 1; j++)
		{
			if (i == -1 || j == -1)
				continue;
			if (i == SIZEBOARD || j == SIZEBOARD)
				continue;
			if (i == y && j == x)
				continue;
			if (i == y1 && j == x1)
				continue;
			arr[i][j] = '!';
		}
	}
	for (int i = y1 - 1; i <= y1 + 1; i++)//Для другої клітинки
	{
		for (int j = x1 - 1; j <= x1 + 1; j++)
		{
			if (i == -1 || j == -1)
				continue;
			if (i == SIZEBOARD || j == SIZEBOARD)
				continue;
			if (i == y && j == x)
				continue;
			if (i == y1 && j == x1)
				continue;
			arr[i][j] = '!';
		}
	}
}

//Створення одиничного корабля
void CreateSingleShip(char arr[SIZEBOARD][SIZEBOARD], int x, int y)
{
	arr[y][x] = 'O';
	//Розтавлення знаків оклику навколо одиничного корабля
	for (int i = y - 1; i <= y + 1; i++)
	{
		for (int j = x - 1; j <= x + 1; j++)
		{
			if (i == -1 || j == -1)
				continue;
			if (i == SIZEBOARD || j == SIZEBOARD)
				continue;
			if (i == y && j == x)
				continue;
			arr[i][j] = '!';
		}
	}
}

//функція для розставлення кораблів на полі
void InitShipsInBoard(char arr[SIZEBOARD][SIZEBOARD])
{
	int x, y;
	//Цикл для розставлення всіх кораблів(всього їх 10)
	for (int k = 0; k < 10; k++)
	{
		//перші 4 кораблі з однієї клітинки 
		if (k < 4)
		{
			//координати х та у для корабля
			x = rand() % SIZEBOARD;
			y = rand() % SIZEBOARD;
			if (arr[y][x] == '.')
				CreateSingleShip(arr, x, y);
			else//Якщо корабель не лежить на вільній клітинці проходимо цикл заново
			{
				k--;
				continue;
			}
		}
		else if (k > 3 && k < 7)
		{
			//координати х та у для першої клітинки корабля
			x = rand() % SIZEBOARD;
			y = rand() % SIZEBOARD;
			if (arr[y][x] == '.')
			{//Пошук другої клітинки корабля
				if (arr[y - 1][x] == '.')
					CreateDoubleShip(arr, x, y, y - 1, x);
				else if (arr[y + 1][x] == '.')
					CreateDoubleShip(arr, x, y, y + 1, x);
				else if (arr[y][x + 1] == '.')
					CreateDoubleShip(arr, x, y, y, x + 1);
				else if (arr[y][x - 1] == '.')
					CreateDoubleShip(arr, x, y, y, x - 1);
				else//Якщо друга клітинка корабля не лежить на вільній клітинці проходимо цикл заново
				{
					k--;
					continue;
				}
			}
			else//Якщо корабель не лежить на вільній клітинці проходимо цикл заново
			{
				k--;
				continue;
			}

		}
		else if (k > 6 && k < 9)
		{
			//координати х та у для першої клітинки корабля
			x = rand() % SIZEBOARD;
			y = rand() % SIZEBOARD;
			if (arr[y][x] == '.')
			{//Пошук другої і третьої клітинки корабля
				if (arr[y - 1][x] == '.' && arr[y - 2][x] == '.')
					CreateTripleShip(arr, x, y, y - 1, x, y - 2, x);
				else if (arr[y + 1][x] == '.' && arr[y + 2][x] == '.')
					CreateTripleShip(arr, x, y, y + 1, x, y + 2, x);
				else if (arr[y][x + 1] == '.' && arr[y][x + 2] == '.')
					CreateTripleShip(arr, x, y, y, x + 1, y, x + 2);
				else if (arr[y][x - 1] == '.' && arr[y][x - 2] == '.')
					CreateTripleShip(arr, x, y, y, x - 1, y, x - 2);
				else//Якщо друга або третя клітинка корабля не лежить на вільній клітинці проходимо цикл заново
				{
					k--;
					continue;
				}
			}
			else//Якщо корабель не лежить на вільній клітинці проходимо цикл заново
			{
				k--;
				continue;
			}

		}
		if (k == 9)
		{
			//координати х та у для першої клітинки корабля
			x = rand() % SIZEBOARD;
			y = rand() % SIZEBOARD;
			if (arr[y][x] == '.')
			{//Пошук другої, третьої та четвертої клітинки корабля
				if (arr[y - 1][x] == '.' && arr[y - 2][x] == '.' && arr[y - 3][x] == '.')
					CreateQuaternaryShip(arr, x, y, y - 1, x, y - 2, x, y - 3, x);
				else if (arr[y + 1][x] == '.' && arr[y + 2][x] == '.' && arr[y + 3][x] == '.')
					CreateQuaternaryShip(arr, x, y, y + 1, x, y + 2, x, y + 3, x);
				else if (arr[y][x + 1] == '.' && arr[y][x + 2] == '.' && arr[y][x + 3] == '.')
					CreateQuaternaryShip(arr, x, y, y, x + 1, y, x + 2, y, x + 3);
				else if (arr[y][x - 1] == '.' && arr[y][x - 2] == '.' && arr[y][x - 3] == '.')
					CreateQuaternaryShip(arr, x, y, y, x - 1, y, x - 2, y, x - 3);
				else//Якщо друга, третя або четверта клітинка корабля не лежить на вільній клітинці проходимо цикл заново
				{
					k--;
					continue;
				}
			}
			else//Якщо корабель не лежить на вільній клітинці проходимо цикл заново
			{
				k--;
				continue;
			}
		}
	}
}