#include <stdlib.h>

#define SIZEBOARD 10

//Ініціалізація моря на полі
void InitBoard(char Board[SIZEBOARD][SIZEBOARD]) {
	for (int i = 0; i < SIZEBOARD; i++) {
		for (int j = 0; j < SIZEBOARD; j++)
			Board[i][j] = '.';
	}
}

//Функція, яка обводить одиночний корабель знаками оклику
void OutlineSingleShip(char arr[SIZEBOARD][SIZEBOARD], int i, int a, int b, int x, int y)
{
	for (int j = a; j <= b; j++)
	{
		if (i == y && j == x)
			continue;
		arr[i][j] = '!';
	}
}

//Створення корабля з 2 кл.
void CreateDoubleShip(char arr[SIZEBOARD][SIZEBOARD], int x, int y, int y1, int x1)
{//розставлення  корабля з 2 кл.
	arr[y][x] = 'O';
	arr[y1][x1] = 'O';
	//Розтавлення знаків оклику навколо кораблів з 2 кл.
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
			if (i < 0 || j < 0)
				continue;
			if (i >= SIZEBOARD || j >= SIZEBOARD)
				continue;
			if (i == y && j == x)
				continue;
			if (i == y1 && j == x1)
				continue;
			arr[i][j] = '!';
		}
	}
}

//функція для розставлення кораблів на полі
void InitShipsInBoard(char arr[SIZEBOARD][SIZEBOARD])
{
	int ship, x, y;
	//Цикл для розставлення всіх кораблів(всього їх 10)
	for (int k = 0; k < SIZEBOARD; k++)
	{
		//перші 4 кораблі з однієї клітинки 
		if (k < 4)
		{
			//змінна для позначення розмір корабля
			ship = 1;
			//координати х та у для корабля
			x = rand() % SIZEBOARD;
			y = rand() % SIZEBOARD;
			if (arr[y][x] == '.')
			{

				arr[y][x] = 'O';

				if (y > 0 && y < SIZEBOARD - 1)
				{//Обведення кораблів які знаходяться не в 0 і не в 9 рядку
					for (int i = y - 1; i <= y + 1; i++)
					{
						if (x > 0 && x < SIZEBOARD -1)
							//Обведення кораблів які знаходяться не в 0 і не в 9 стовпчику
							OutlineSingleShip(arr, i, x - 1, x + 1, x, y);
						else if (x == 0)
							//Обведення кораблів які знаходяться в 0 стовпчику
							OutlineSingleShip(arr, i, x, x + 1, x, y);
						else if (x == SIZEBOARD - 1)
							//Обведення кораблів які знаходяться в 9 стовпчику
							OutlineSingleShip(arr, i, x - 1, x, x, y);
					}
				}
				else if (y == 0)
				{//Обведення кораблів які знаходяться в 0 рядку
					for (int i = y; i <= y + 1; i++)
					{
						if (x > 0 && x < SIZEBOARD - 1)
							//Обведення кораблів які знаходяться не в 0 і не в 9 стовпчику
							OutlineSingleShip(arr, i, x - 1, x + 1, x, y);
						else if (x == 0)
							//Обведення кораблів які знаходяться в 0 стовпчику
							OutlineSingleShip(arr, i, x, x + 1, x, y);
						else if (x == SIZEBOARD - 1)
							//Обведення кораблів які знаходяться в 9 стовпчику
							OutlineSingleShip(arr, i, x - 1, x, x, y);
					}
				}
				else if (y == 9)
				{//Обведення кораблів які знаходяться в 9 рядку
					for (int i = y - 1; i <= y; i++)
					{
						if (x > 0 && x < SIZEBOARD - 1)
							//Обведення кораблів які знаходяться не в 0 і не в 9 стовпчику
							OutlineSingleShip(arr, i, x - 1, x + 1, x, y);
						else if (x == 0)
							//Обведення кораблів які знаходяться в 0 стовпчику
							OutlineSingleShip(arr, i, x, x + 1, x, y);
						else if (x == SIZEBOARD - 1)
							//Обведення кораблів які знаходяться в 9 стовпчику
							OutlineSingleShip(arr, i, x - 1, x, x, y);
					}
				}
			}
			else//Якщо корабель не лежить на вільній клітинці проходимо цикл заново
			{
				k--;
				continue;
			}
		}
		else if (k > 3 && k < 7)
		{
			//Наступні 3 кораблі з двох клітинок
			ship = 2;
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
		else if (k > 6 && k < SIZEBOARD - 1)
		{

		}



	}
}
