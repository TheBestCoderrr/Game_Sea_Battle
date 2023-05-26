#define SIZEBOARD 10

using namespace std;
//�������� �� ����� ������� �� �
bool HitOrMiss(char Board[SIZEBOARD][SIZEBOARD],short int RowPlayer,short int ColPlayer) {
	return Board[RowPlayer][ColPlayer] == 'O' ? true : false;
}

//�������� �� ������������ ��� ������������ �������� ��� ��������
short int VerticalOrGorisontalShip(char BoardShip[SIZEBOARD][SIZEBOARD],short int RowPlayer,short int ColPlayer) {
	if (BoardShip[RowPlayer][ColPlayer + 1] == 'O' && ColPlayer + 1 < SIZEBOARD)
		return 2;
	if (BoardShip[RowPlayer][ColPlayer - 1] == 'O' && ColPlayer - 1 >= 0)
		return 2;
	if (BoardShip[RowPlayer + 1][ColPlayer] == 'O' && RowPlayer + 1 < SIZEBOARD)
		return 3;
	if (BoardShip[RowPlayer - 1][ColPlayer] == 'O' && RowPlayer - 1 >= 0)
		return 3;
	return 1;
}

//�������� �� ���������� ��������
bool IsSunkenShip(char BoardPlayer[SIZEBOARD][SIZEBOARD], char BoardShip[SIZEBOARD][SIZEBOARD],short int RowPlayer,short int ColPlayer) {
	bool Symbol1 = true, Symbol2 = true;
	//�������� �� ���������� �������������� ��������
	if (VerticalOrGorisontalShip(BoardShip, RowPlayer, ColPlayer) == 2) {
		for (short int n = 1; Symbol1 == true; n++) {
			if (BoardShip[RowPlayer][ColPlayer + n] == 'O' && BoardPlayer[RowPlayer][ColPlayer + n] != 'X' && ColPlayer + n < SIZEBOARD)
				return false;
			if (BoardShip[RowPlayer][ColPlayer + n] != 'O')
				Symbol1 = false;
		}

		for (short int n = 1; Symbol2 == true; n++) {
			if (BoardShip[RowPlayer][ColPlayer - n] == 'O' && BoardPlayer[RowPlayer][ColPlayer - n] != 'X' && ColPlayer - n >= 0)
				return false;
			if (BoardShip[RowPlayer][ColPlayer - n] != 'O')
				Symbol2 = false;
		}
		return true;
	}
	//�������� �� ���������� ������������ ��������
	else if (VerticalOrGorisontalShip(BoardShip, RowPlayer, ColPlayer) == 3) {
		for (short int n = 1; Symbol1 == true; n++) {
			if (BoardShip[RowPlayer + n][ColPlayer] == 'O' && BoardPlayer[RowPlayer + n][ColPlayer] != 'X' && RowPlayer + n < SIZEBOARD)
				return false;
			if (BoardShip[RowPlayer + n][ColPlayer] != 'O')
				Symbol1 = false;
		}

		for (short int n = 1; Symbol2 == true; n++) {
			if (BoardShip[RowPlayer - n][ColPlayer] == 'O' && BoardPlayer[RowPlayer - n][ColPlayer] != 'X' && RowPlayer - n >= 0)
				return false;
			if (BoardShip[RowPlayer - n][ColPlayer] != 'O')
				Symbol2 = false;
		}
		return true;
	}
	//������ �������� ���������
	else
		return true;
}

//���������� ������������ ������� � ���������� �� ���������� ������ ����� ����� '!'
void FarbSunkenShip(char BoardPlayer[SIZEBOARD][SIZEBOARD], char BoardShip[SIZEBOARD][SIZEBOARD],short int RowPlayer,short int ColPlayer) {
	bool Symbol1 = true, Symbol2 = true;

	//���������� ��������������� �������
	if (VerticalOrGorisontalShip(BoardShip, RowPlayer, ColPlayer) == 2) {
		for (short int i = 0; Symbol1 == true; i++) {
			if (RowPlayer - 1 >= 0 && ColPlayer + i < SIZEBOARD)
				BoardPlayer[RowPlayer - 1][ColPlayer + i] = '!';
			if (RowPlayer + 1 <  SIZEBOARD && ColPlayer + i < SIZEBOARD)
				BoardPlayer[RowPlayer+ 1][ColPlayer + i] = '!';
			if (BoardPlayer[RowPlayer][ColPlayer + i] == 'X' && ColPlayer + i < SIZEBOARD)
				BoardPlayer[RowPlayer][ColPlayer + i] = '#';
			else {
				if(ColPlayer + i < SIZEBOARD)
					BoardPlayer[RowPlayer][ColPlayer + i] = '!';
				Symbol1 = false;
			}
		}
		
		for (short int i = 1; Symbol2 == true; i++) {
			if (RowPlayer - 1 >= 0 && ColPlayer - i >= 0)
				BoardPlayer[RowPlayer - 1][ColPlayer - i] = '!';
			if (RowPlayer + 1 <  SIZEBOARD && ColPlayer - i >= 0)
				BoardPlayer[RowPlayer+ 1][ColPlayer - i] = '!';
			if (BoardPlayer[RowPlayer][ColPlayer - i] == 'X' && ColPlayer - i >= 0)
				BoardPlayer[RowPlayer][ColPlayer - i] = '#';
			else {
				if(ColPlayer - i >= 0)
					BoardPlayer[RowPlayer][ColPlayer - i] = '!';
				Symbol2 = false;
			}
		}
	}
	//���������� ������������� �������
	else if (VerticalOrGorisontalShip(BoardShip, RowPlayer, ColPlayer) == 3) {
		for (short int i = 0; Symbol1 == true; i++) {
			if (ColPlayer - 1 >= 0 && RowPlayer + i < SIZEBOARD)
				BoardPlayer[RowPlayer + i][ColPlayer - 1] = '!';
			if (ColPlayer + 1 < SIZEBOARD && RowPlayer + i < SIZEBOARD)
				BoardPlayer[RowPlayer + i][ColPlayer + 1] = '!';
			if (BoardPlayer[RowPlayer + i][ColPlayer] == 'X' && RowPlayer + i < SIZEBOARD)
				BoardPlayer[RowPlayer + i][ColPlayer] = '#';
			else {
				if (RowPlayer + i < SIZEBOARD)
					BoardPlayer[RowPlayer + i][ColPlayer] = '!';
				Symbol1 = false;
			}
		}
		
		for (short int i = 1; Symbol2 == true; i++) {
			if (ColPlayer - 1 >= 0 && RowPlayer - i >= 0)
				BoardPlayer[RowPlayer - i][ColPlayer - 1] = '!';
			if (ColPlayer + 1 < SIZEBOARD && RowPlayer - i >= 0)
				BoardPlayer[RowPlayer - i][ColPlayer + 1] = '!';
			if (BoardPlayer[RowPlayer - i][ColPlayer] == 'X' && RowPlayer - i >= 0)
				BoardPlayer[RowPlayer - i][ColPlayer] = '#';
			else {
				if (RowPlayer - i >= 0)
					BoardPlayer[RowPlayer - i][ColPlayer] = '!';
				Symbol2 = false;
			}
		}
	}
	//���������� ��������
	else {
		for (short int i = 1; i > -2 ; i--) {
			if (RowPlayer - i >= 0 && RowPlayer - i < SIZEBOARD) {
				for (int j = 1; j > -2; j--) {
					if (ColPlayer - j >= 0 && ColPlayer - j < SIZEBOARD)
						BoardPlayer[RowPlayer - i][ColPlayer - j] = '!';
				}
			}
		}

		BoardPlayer[RowPlayer][ColPlayer] = '#';
		
	}

}

void ChangeSymbolInCell(char BoardPlayer[SIZEBOARD][SIZEBOARD], char BoardShip[SIZEBOARD][SIZEBOARD],short int RowPlayer,short int ColPlayer) {
	//���� �� ����� �� ���� Miss
	if (HitOrMiss(BoardShip, RowPlayer, ColPlayer) == false)
		BoardPlayer[RowPlayer][ColPlayer] = '!';
	//����� ����� �� �������� �� ���������� ��������
	else {
		BoardPlayer[RowPlayer][ColPlayer] = 'X';
		if (IsSunkenShip(BoardPlayer, BoardShip, RowPlayer, ColPlayer))
			FarbSunkenShip(BoardPlayer, BoardShip, RowPlayer, ColPlayer);
	}
}