#include <iostream>

int autor() {
	std::cout << "Autor:Eryk \n";
	return 0;
}
int wprowadzenie() {
	std::cout << "Autorska implementacja gry \"Saper\".\n";
	std::cout << "Za pomoca przelacznikow mozna okreslic:\n";
	std::cout << "- rozmiar planszy (wysokosc i szerokosc)\n";
	std::cout << "- imie aktualnego gracza\n";
	std::cout << "- ilosc losowo rozmieszczonych min\n";
	std::cout << "- wczytac plik statystyk graczy\n";
	autor();
	return 0;
}
int pomoc() {
	std::cout << "minesweeper.exe - autorska implementacja gry \"Saper\"\n";
	std::cout << "Uzycie: minesweeper.exe -x [liczba] -y [liczba] -m [liczba] (-i [tekst] | -w [plik])\n";
	std::cout << "-x - pobiera szerokosc planszy; musi byc ona dodatnia.\n";
	std::cout << "Przyklad: minesweeper.exe -x 10 - wygeneruje plansze o szerokosci 10 pol.\n";
	std::cout << "-y - pobiera wysokosc planszy; musi byc ona dodatnia.\n";
	std::cout << "Przyklad: minesweeper.exe -y 15 - wygeneruje plansze o wysokosci 15 pol.\n";
	std::cout << "-m - pobiera ilosc min do losowego rozmieszczenia na planszy; musi byc ona dodatnia.\n";
	std::cout << "Przyklad: minesweeper.exe -m 30 - wygeneruje 30 min na planszy.\n";
	std::cout << "Opcjonalne: -i - imie gracza; tylko jesli gracz chce podac swoje imie badz nick - w przeciwnym wypadku jego wyniki beda zapisywane jako \"Anonim\".\n";
	std::cout << "Przyklad: minesweeper.exe -i Xena1994 - zapamieta gracza pod imieniem \"Xena1994\".\n";
	std::cout << "-w - otwiera plik rekordow rozgrywek; jesli nie zostanie podany, otworzy plik \"rekordy.txt\" bedacy obok pliku wykonywalnego albo utworzy go.\n";
	std::cout << "Przyklad: minesweeper.exe -w C:\\rekordy.txt - otworzy rekordy z pliku \"rekordy.txt\" bezposrednio na dysku C:.\n\n";

	return 0;
}