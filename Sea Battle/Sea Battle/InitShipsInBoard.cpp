#include <stdlib.h>

#define SIZEBOARD 10

//����������� ���� �� ���
void InitBoard(char Board[SIZEBOARD][SIZEBOARD]) {
	for (int i = 0; i < SIZEBOARD; i++) {
		for (int j = 0; j < SIZEBOARD; j++)
			Board[i][j] = '.';
	}
}

//�������, ��� �������� ��������� �������� ������� ������
void OutlineSingleShip(char arr[SIZEBOARD][SIZEBOARD], int i, int a, int b, int x, int y)
{
	for (int j = a; j <= b; j++)
	{
		if (i == y && j == x)
			continue;
		arr[i][j] = '!';
	}
}

//��������� ������� � 2 ��.
void CreateDoubleShip(char arr[SIZEBOARD][SIZEBOARD], int x, int y, int y1, int x1)
{//������������  ������� � 2 ��.
	arr[y][x] = 'O';
	arr[y1][x1] = 'O';
	//����������� ����� ������ ������� ������� � 2 ��.
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

//������� ��� ������������ ������� �� ���
void InitShipsInBoard(char arr[SIZEBOARD][SIZEBOARD])
{
	int ship, x, y;
	//���� ��� ������������ ��� �������(������ �� 10)
	for (int k = 0; k < SIZEBOARD; k++)
	{
		//����� 4 ������ � ���� ������� 
		if (k < 4)
		{
			//����� ��� ���������� ����� �������
			ship = 1;
			//���������� � �� � ��� �������
			x = rand() % SIZEBOARD;
			y = rand() % SIZEBOARD;
			if (arr[y][x] == '.')
			{

				arr[y][x] = 'O';

				if (y > 0 && y < SIZEBOARD - 1)
				{//��������� ������� �� ����������� �� � 0 � �� � 9 �����
					for (int i = y - 1; i <= y + 1; i++)
					{
						if (x > 0 && x < SIZEBOARD -1)
							//��������� ������� �� ����������� �� � 0 � �� � 9 ���������
							OutlineSingleShip(arr, i, x - 1, x + 1, x, y);
						else if (x == 0)
							//��������� ������� �� ����������� � 0 ���������
							OutlineSingleShip(arr, i, x, x + 1, x, y);
						else if (x == SIZEBOARD - 1)
							//��������� ������� �� ����������� � 9 ���������
							OutlineSingleShip(arr, i, x - 1, x, x, y);
					}
				}
				else if (y == 0)
				{//��������� ������� �� ����������� � 0 �����
					for (int i = y; i <= y + 1; i++)
					{
						if (x > 0 && x < SIZEBOARD - 1)
							//��������� ������� �� ����������� �� � 0 � �� � 9 ���������
							OutlineSingleShip(arr, i, x - 1, x + 1, x, y);
						else if (x == 0)
							//��������� ������� �� ����������� � 0 ���������
							OutlineSingleShip(arr, i, x, x + 1, x, y);
						else if (x == SIZEBOARD - 1)
							//��������� ������� �� ����������� � 9 ���������
							OutlineSingleShip(arr, i, x - 1, x, x, y);
					}
				}
				else if (y == 9)
				{//��������� ������� �� ����������� � 9 �����
					for (int i = y - 1; i <= y; i++)
					{
						if (x > 0 && x < SIZEBOARD - 1)
							//��������� ������� �� ����������� �� � 0 � �� � 9 ���������
							OutlineSingleShip(arr, i, x - 1, x + 1, x, y);
						else if (x == 0)
							//��������� ������� �� ����������� � 0 ���������
							OutlineSingleShip(arr, i, x, x + 1, x, y);
						else if (x == SIZEBOARD - 1)
							//��������� ������� �� ����������� � 9 ���������
							OutlineSingleShip(arr, i, x - 1, x, x, y);
					}
				}
			}
			else//���� �������� �� ������ �� ����� ������� ��������� ���� ������
			{
				k--;
				continue;
			}
		}
		else if (k > 3 && k < 7)
		{
			//������� 3 ������ � ���� �������
			ship = 2;
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
		else if (k > 6 && k < SIZEBOARD - 1)
		{

		}



	}
}
