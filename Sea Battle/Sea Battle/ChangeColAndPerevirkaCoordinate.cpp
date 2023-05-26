#define SIZEBOARD 10
//‘ункц≥€ €ка зм≥нюЇ колонку гравц€ з л≥тери в ≥ндекс дл€ масиву
short int ChangeColPlayer(char ColPlayer) {
	char Letter = 'A';
	for (short int i = 0; i < SIZEBOARD; i++) {
		if (ColPlayer == Letter++)
			return i;
	}
}
//ѕерев≥рка на те чи ран≥ше стр≥л€в гравець в цю кл≥тинку чи н≥
bool PerevirkaNaCoordinate(char Board[SIZEBOARD][SIZEBOARD],short int RowPlayer,short int ColPlayer) {
	return Board[RowPlayer][ColPlayer] == '.' ? true : false;
}