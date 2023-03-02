#ifndef RECORDS_H
#define RECORDS_H

#include <list>
#include <ctime>

#include "board.h"

struct Wynik {
	std::string imieGracza;
	std::time_t poczatek;
	std::time_t koniec;
	Plansza plansza;
} typedef Wynik;

struct Rekordy {
	std::string sciezkaPliku;
	std::list<Wynik> lista;
} typedef Rekordy;

bool czyPlikDostepny(const char* plikTestowy);

int generujPlik(const char* plikRekordow);

int pobierzRekordy(Rekordy* rekordy);

int wypiszRekordy(Rekordy* rekordy);

#endif

