#include<stdlib.h>

#define SIZEBOARD 10

//������� ��� ��������� ������� ����
void InitBoard(char arr[SIZEBOARD][SIZEBOARD])
{
	for (int i = 0; i < SIZEBOARD; i++)
	{
		for (int j = 0; j < SIZEBOARD; j++)
			arr[i][j] = '.';
	}
}

//��������� �������� �������
void CreateTripleShip(char arr[SIZEBOARD][SIZEBOARD], int x, int y, int y1, int x1, int y2, int x2)
{//������������ �������� �������
	arr[y][x] = 'O';
	arr[y1][x1] = 'O';
	arr[y2][x2] = 'O';
	//����������� ����� ������ ������� ������� �������
	for (int i = y - 1; i <= y + 1; i++)//��� ����� �������
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
	for (int i = y1 - 1; i <= y1 + 1; i++)//��� ����� �������
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
	for (int i = y2 - 1; i <= y2 + 1; i++)//��� ������ �������
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
//��������� ���������� �������
void CreateQuaternaryShip(char arr[SIZEBOARD][SIZEBOARD], int x, int y, int y1, int x1, int y2, int x2, int y3, int x3)
{//������������ ���������� �������
	arr[y][x] = 'O';
	arr[y1][x1] = 'O';
	arr[y2][x2] = 'O';
	arr[y3][x3] = 'O';
	//����������� ����� ������ ������� ������� �������
	for (int i = y - 1; i <= y + 1; i++)//��� ����� �������
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
	for (int i = y1 - 1; i <= y1 + 1; i++)//��� ����� �������
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
	for (int i = y2 - 1; i <= y2 + 1; i++)//��� ������ �������
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
	for (int i = y3 - 1; i <= y3 + 1; i++)//��� �������� �������
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

//��������� �������� �������
void CreateDoubleShip(char arr[SIZEBOARD][SIZEBOARD], int x, int y, int y1, int x1)
{//������������ �������� �������
	arr[y][x] = 'O';
	arr[y1][x1] = 'O';
	//����������� ����� ������ ������� ������� �������
	for (int i = y - 1; i <= y + 1; i++)//��� ����� �������
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
	for (int i = y1 - 1; i <= y1 + 1; i++)//��� ����� �������
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

//��������� ���������� �������
void CreateSingleShip(char arr[SIZEBOARD][SIZEBOARD], int x, int y)
{
	arr[y][x] = 'O';
	//����������� ����� ������ ������� ���������� �������
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

//������� ��� ������������ ������� �� ���
void InitShipsInBoard(char arr[SIZEBOARD][SIZEBOARD])
{
	int x, y;
	//���� ��� ������������ ��� �������(������ �� 10)
	for (int k = 0; k < 10; k++)
	{
		//����� 4 ������ � ���� ������� 
		if (k < 4)
		{
			//���������� � �� � ��� �������
			x = rand() % SIZEBOARD;
			y = rand() % SIZEBOARD;
			if (arr[y][x] == '.')
				CreateSingleShip(arr, x, y);
			else//���� �������� �� ������ �� ����� ������� ��������� ���� ������
			{
				k--;
				continue;
			}
		}
		else if (k > 3 && k < 7)
		{
			//���������� � �� � ��� ����� ������� �������
			x = rand() % SIZEBOARD;
			y = rand() % SIZEBOARD;
			if (arr[y][x] == '.')
			{//����� ����� ������� �������
				if (arr[y - 1][x] == '.')
					CreateDoubleShip(arr, x, y, y - 1, x);
				else if (arr[y + 1][x] == '.')
					CreateDoubleShip(arr, x, y, y + 1, x);
				else if (arr[y][x + 1] == '.')
					CreateDoubleShip(arr, x, y, y, x + 1);
				else if (arr[y][x - 1] == '.')
					CreateDoubleShip(arr, x, y, y, x - 1);
				else//���� ����� ������� ������� �� ������ �� ����� ������� ��������� ���� ������
				{
					k--;
					continue;
				}
			}
			else//���� �������� �� ������ �� ����� ������� ��������� ���� ������
			{
				k--;
				continue;
			}

		}
		else if (k > 6 && k < 9)
		{
			//���������� � �� � ��� ����� ������� �������
			x = rand() % SIZEBOARD;
			y = rand() % SIZEBOARD;
			if (arr[y][x] == '.')
			{//����� ����� � ������ ������� �������
				if (arr[y - 1][x] == '.' && arr[y - 2][x] == '.')
					CreateTripleShip(arr, x, y, y - 1, x, y - 2, x);
				else if (arr[y + 1][x] == '.' && arr[y + 2][x] == '.')
					CreateTripleShip(arr, x, y, y + 1, x, y + 2, x);
				else if (arr[y][x + 1] == '.' && arr[y][x + 2] == '.')
					CreateTripleShip(arr, x, y, y, x + 1, y, x + 2);
				else if (arr[y][x - 1] == '.' && arr[y][x - 2] == '.')
					CreateTripleShip(arr, x, y, y, x - 1, y, x - 2);
				else//���� ����� ��� ����� ������� ������� �� ������ �� ����� ������� ��������� ���� ������
				{
					k--;
					continue;
				}
			}
			else//���� �������� �� ������ �� ����� ������� ��������� ���� ������
			{
				k--;
				continue;
			}

		}
		if (k == 9)
		{
			//���������� � �� � ��� ����� ������� �������
			x = rand() % SIZEBOARD;
			y = rand() % SIZEBOARD;
			if (arr[y][x] == '.')
			{//����� �����, ������ �� �������� ������� �������
				if (arr[y - 1][x] == '.' && arr[y - 2][x] == '.' && arr[y - 3][x] == '.')
					CreateQuaternaryShip(arr, x, y, y - 1, x, y - 2, x, y - 3, x);
				else if (arr[y + 1][x] == '.' && arr[y + 2][x] == '.' && arr[y + 3][x] == '.')
					CreateQuaternaryShip(arr, x, y, y + 1, x, y + 2, x, y + 3, x);
				else if (arr[y][x + 1] == '.' && arr[y][x + 2] == '.' && arr[y][x + 3] == '.')
					CreateQuaternaryShip(arr, x, y, y, x + 1, y, x + 2, y, x + 3);
				else if (arr[y][x - 1] == '.' && arr[y][x - 2] == '.' && arr[y][x - 3] == '.')
					CreateQuaternaryShip(arr, x, y, y, x - 1, y, x - 2, y, x - 3);
				else//���� �����, ����� ��� �������� ������� ������� �� ������ �� ����� ������� ��������� ���� ������
				{
					k--;
					continue;
				}
			}
			else//���� �������� �� ������ �� ����� ������� ��������� ���� ������
			{
				k--;
				continue;
			}
		}
	}
}