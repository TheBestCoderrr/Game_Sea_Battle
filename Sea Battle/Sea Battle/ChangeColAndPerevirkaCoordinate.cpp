#define SIZEBOARD 10
//������� ��� ����� ������� ������ � ����� � ������ ��� ������
int ChangeColPlayer(char ColPlayer) {
	char Letter = 'A';
	for (int i = 0; i < SIZEBOARD; i++) {
		if (ColPlayer == Letter++)
			return i;
	}
}
//�������� �� �� �� ����� ������ ������� � �� ������� �� �
bool PerevirkaNaCoordinate(char Board[SIZEBOARD][SIZEBOARD], int RowPlayer, int ColPlayer) {
	return Board[RowPlayer][ColPlayer] == '.' ? true : false;
}