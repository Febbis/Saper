#include <iostream>
#include <fstream>

#include "formal.h"
#include "records.h"

int main(int argc, char* argv[]) {
	Rekordy* rekordy = new Rekordy();
	rekordy->sciezkaPliku = "rekordy.txt";

	wprowadzenie();
	system("pause");
	system("cls");

	if (argc < 2) {
		pomoc();

		return 1;
	}

	for (int i = 0; i < argc; i++) {
		std::string tmp = argv[i];

		if (tmp == "-w") {
			if (i == argc - 1) {
				std::cout << "Nie podano sciezki do pliku.\n";
				pomoc();

				return 2;
			}
			else {
				tmp = argv[i + 1];
				if (!czyPlikDostepny(tmp.c_str())) {
					std::cout << "Plik " << tmp << " jest nieosiagalny lub nie istnieje.\n";

					return 3;
				}
				rekordy->sciezkaPliku = tmp.c_str();
			}
		}
	}

	pobierzRekordy(rekordy);
	wypiszRekordy(rekordy);

	delete(rekordy);
	system("pause");
	return 0;
}
