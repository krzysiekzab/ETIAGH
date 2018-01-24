// ConsoleApplication1.cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include<string>
#include<cstdlib>

using namespace std;


string imie, nazwisko;
int nr_tel;
int wybor;
int wybor_raport;

string Data_utworzenia;
string Tytul_zadania;
string Opis_zadania;
string Tworca_zadania;
string Osoba_odpowiedzialna;
string Projekt_deadline;

int main()
{

	cout << "MENU GLOWNE" << endl;
	cout << "----------------" << endl;
	cout << "1.Uzytkownik " << endl;
	cout << "2.Raport " << endl;
	cout << "3.Zadania" << endl;
	cout << "4.Projekty" << endl;
	cout << "5 Raport koncowy" << endl;

	cout << "Wybierz: ";
	cin >> wybor;

	switch (wybor)
	{
	case 1:
	{
		cout << "Uzytkownik" << endl;
	}
	break;
	case 2:
	{
		cout << "Stworz raport !!!" << endl;
		cout << "*****************************" << endl;

		cout << "Podaj imie: "; cin >> imie;
		cout << "Podaj nazwisko: "; cin >> nazwisko;
		cout << "Podaj nr telefonu: "; cin >> nr_tel;
		cout << endl;
		cout << "Raport zostal stworzony i zapisany pod nazwa: raport.txt" << endl;
		cout << endl;

		fstream plik;
		plik.open("raport.txt", ios::out);

		plik << "RAPORT" << endl;
		plik << "Imie uzytkownia: " << imie << endl;
		plik << "Nazwisko uzytkownika: " << nazwisko << endl;
		plik << "Numer telefonu: " << nr_tel << endl;
	
		plik.close();
	}
	break;
	case 3:
	{
		cout << "zadania" << endl;
	}
	break;
	case 4:
	{
		cout << "projekty" << endl;
		break;
	}

	case 5: 
	{
		fstream plikodczyt;
		plikodczyt.open("Odczyt.xml", ios::in);

		if (plikodczyt.good() == false)
		{
			cout << "nie ma takiego pliku" << endl;
			exit(0);

		}
		
		string linia;
		int nr_lini = 1;
		while (getline(plikodczyt, linia))
		{
		switch (nr_lini)
		{
		case 5: Data_utworzenia = linia; break;
		case 6: Tytul_zadania = linia; break;
		case 7: Opis_zadania = linia; break;
		case 8: Tworca_zadania = linia; break;
		case 9: Osoba_odpowiedzialna = linia; break;
		case 10: Projekt_deadline = linia; break;

		}
			nr_lini++;
		}

		plikodczyt.close();

		
		cout << endl;
		cout << "********************************" << endl;
		cout <<"Data utworzenia: " << Data_utworzenia << endl;
		cout <<"Tytul zadania: "<< Tytul_zadania << endl;
		cout <<"Opis zadania: "<< Opis_zadania << endl;
		cout <<"Tworca zadania: "<< Tworca_zadania << endl;
		cout <<"Osoba odpowiedzialna: "<< Osoba_odpowiedzialna << endl;
		cout <<"Czas do oddania: "<< Projekt_deadline << endl;
		cout << "*******************************" << endl;
	
		cout << "Stworz raport !!!" << endl;
		cout << "*****************************" << endl;

		cout << "Podaj imie: "; cin >> imie;
		cout << "Podaj nazwisko: "; cin >> nazwisko;
		cout << "Podaj nr telefonu: "; cin >> nr_tel;
		cout << endl;


		cout << " Wybierz w jakim formacie zapisaæ raport: " << endl;
		cout << " 1: Otrzymasz plik w formacie txt " << endl;
		cout << " 2: Otrzymasz plik w formacie xls " << endl;
		cout << " Wybierz: ";
		cin >> wybor_raport;
		cout << endl;

		switch (wybor_raport)
		{
		case 1: 
		{
			fstream plik;
			plik.open("raport.txt", ios::out);

			plik << "*******************************" << endl;
			plik << "RAPORT" << endl;
			plik << "Imie uzytkownia: " << imie << endl;
			plik << "Nazwisko uzytkownika: " << nazwisko << endl;
			plik << "Numer telefonu: " << nr_tel << endl;
			plik << "Data utworzenia: " << Data_utworzenia << endl;
			plik << "Tytul zadania: " << Tytul_zadania << endl;
			plik << "Opis zadania: " << Opis_zadania << endl;
			plik << "Tworca zadania: " << Tworca_zadania << endl;
			plik << "Osoba odpowiedzialna: " << Osoba_odpowiedzialna << endl;
			plik << "Czas do oddania projektu: " << Projekt_deadline << endl;
			plik << "*******************************" << endl;
			cout << endl;
			cout << "Raport zostal stworzony i zapisany pod nazwa: raport.txt" << endl;
			cout << endl;

			plik.close();
			break;
		}
		case 2:
		{
			fstream plik;
			plik.open("Raport.xls", ios::out);

			plik << "*******************************" << endl;
			plik << "RAPORT" << endl;
			plik << "Imie uzytkownia: " << imie << endl;
			plik << "Nazwisko uzytkownika: " << nazwisko << endl;
			plik << "Numer telefonu: " << nr_tel << endl;
			plik << "Data utworzenia: " << Data_utworzenia << endl;
			plik << "Tytul zadania: " << Tytul_zadania << endl;
			plik << "Opis zadania: " << Opis_zadania << endl;
			plik << "Tworca zadania: " << Tworca_zadania << endl;
			plik << "Osoba odpowiedzialna: " << Osoba_odpowiedzialna << endl;
			plik << "Czas do oddania projektu: " << Projekt_deadline << endl;
			plik << "*******************************" << endl;
			cout << endl;
			cout << "Raport zostal stworzony i zapisany pod nazwa: Raport.xls" << endl;
			cout << endl;

			plik.close();
			break;
		}
		default: "Nie ma takiej opcji:  !!!! ";
	}


	}



	
	}




	system("pause");



	return 0;



}

