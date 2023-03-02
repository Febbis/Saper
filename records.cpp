#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <ctime>
#include <list>

#include "records.h"

bool czyPlikDostepny(const char* plik) {
	std::ifstream tmp(plik);
	if (!tmp.is_open()) {
		return false;
	}
	tmp.close();
	return true;
}

int generujPlik(const char* plikRekordow) {
	std::ofstream* plik = new std::ofstream(plikRekordow);

	time_t timer;
	time(&timer);

	*plik << "Micha³\n" << timer << "\n" << timer + 60 << "\n" << "10\n" << "10\n" << "10\n";

	plik->close();
	delete(plik);
	return 0;
}

int pobierzRekordy(Rekordy* rekordy) {
	std::string tmp;
	std::ifstream* plik = new std::ifstream(rekordy->sciezkaPliku);

	while (getline(*plik, tmp)) {
		Wynik* wynik = new Wynik();
		wynik->imieGracza = tmp.c_str();

		for (int i = 0; i < 5; i++) {
			getline(*plik, tmp);
			std::stringstream strumien(tmp);
			if (i == 0) {
				strumien >> wynik->poczatek;
			}
			else if (i == 1) {
				strumien >> wynik->koniec;
			}
			else if (i == 2) {
				strumien >> wynik->plansza.szerokosc;
			}
			else if (i == 3) {
				strumien >> wynik->plansza.wysokosc;
			}
			else if (i == 4) {
				strumien >> wynik->plansza.liczbaMin;
			}
		}
		rekordy->lista.push_back(*wynik);
		delete(wynik);
	}

	plik->close();
	delete(plik);
	return 0;
}

int wypiszRekordy(Rekordy* rekordy) {
	for (std::list<Wynik>::iterator it = rekordy->lista.begin(); it != rekordy->lista.end(); ++it) {
		std::cout << it->imieGracza << "; data: " << it->poczatek << "; czas: ";
		std::cout << difftime(it->koniec, it->poczatek) << "s; plansza: " << it->plansza.szerokosc;
		std::cout << "x" << it->plansza.wysokosc << ", liczba min: " << it->plansza.liczbaMin;
		std::cout << std::endl;
	}
	return 0;
}