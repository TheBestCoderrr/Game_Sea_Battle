#define SIZEBOARD 10
//������� ��� ����� ������� ������ � ����� � ������ ��� ������
short int ChangeColPlayer(char ColPlayer) {
	char Letter = 'A';
	for (short int i = 0; i < SIZEBOARD; i++) {
		if (ColPlayer == Letter++)
			return i;
	}
}
//�������� �� �� �� ����� ������ ������� � �� ������� �� �
bool PerevirkaNaCoordinate(char Board[SIZEBOARD][SIZEBOARD],short int RowPlayer,short int ColPlayer) {
	return Board[RowPlayer][ColPlayer] == '.' ? true : false;
}