// KryptografiaProjekt.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
#include <conio.h>
#include <time.h>
#include<vector>
#include <stdlib.h>
#include "stdlib.h"

using namespace std;
string tresc, zaszyfrowany, odszyfrowany;
int dl, ascii, wybor;
int tab[50];
char znak;

int main()
{
	srand((unsigned)time(NULL));
	cout << "Podaj informacje do zakodaowania (polskie znaki nie będą zaszyfrowane poprawnie)" << endl;
	getline(cin, tresc);


	for (int i = 0; i < tresc.size(); i++)
	{
		znak = tresc[i];
		ascii = (int)znak;
		tab[i] = ascii + 5;

		ascii = 0;
		znak = 0;
	}

	for (int z = 0; z < tresc.size(); z++)
	{
		zaszyfrowany = zaszyfrowany + (char)tab[z] + (char)(rand() % 90 + 10);
	}


	for (int x = 0; x < tresc.size(); x++)
	{
		odszyfrowany = odszyfrowany + ((char)((int)zaszyfrowany[x * 2] - 5));
	}

	bool warunek = true;
	do {
		system("cls");
		cout << "1) Pokaz zaszyfrowana tresc" << endl;
		cout << "2) Pokaz odszyfrowana tresc" << endl;
		cout << "3) Pokaz tresc zaszyfrowana i odszyfrowana" << endl;
		cout << "0) Zakoncz" << endl;
		cin >> wybor;

		switch (wybor) {
		case 1:
			system("cls");
			cout << zaszyfrowany;
			cout << endl; system("pause");
			break;

		case 2:
			system("cls");
			cout << odszyfrowany;
			cout << endl; system("pause");
			break;

		case 3:
			system("cls");
			cout << zaszyfrowany << endl;
			cout << odszyfrowany;
			cout << endl; system("pause");
			break;


		case 0:
			warunek = false;
			break;
		}
	} while (warunek);

	cout << endl; system("pause");
	return 0;
}


// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
