// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include<string>

using namespace std;


string imie, nazwisko;
int nr_tel;
int nr_zadania;
int wybor;

int main()
{

	cout << "MENU GLOWNE" << endl;
	cout << "----------------" << endl;
	cout << "1.Uzytkownik " << endl;
	cout << "2.Raport " << endl;
	cout << "3.Zadania" << endl;
	cout << "4.Projekty" << endl;

	cout << "Wybierz: ";
	cin >> wybor;

	switch (wybor)
	{
	case 1:
	{
		cout << "Uzytkownik"<<endl;
	}
	break;
	case 2:
	{
		cout << "Stworz raport !!!" << endl;
		cout << "*****************************" << endl;

		cout << "Podaj imie: "; cin >> imie;
		cout << "Podaj nazwisko: "; cin >> nazwisko;
		cout << "Podaj nr telefonu: "; cin >> nr_tel;
		cout << "Podaj nr_zadania: "; cin >> nr_zadania;
		cout << endl;
		cout << "Raport zostal stworzony i zapisany pod nazwa: raport.txt" << endl;
		cout << endl;

		fstream plik;
		plik.open("raport.txt", ios::out);

		plik << "RAPORT" << endl;
		plik << "Imie uzytkownia: " << imie << endl;
		plik << "Nazwisko uzytkownika: " << nazwisko << endl;
		plik << "Numer telefonu: " << nr_tel << endl;
		plik << "Numer zadania: " << nr_zadania << endl;
		plik.close();
	}
	break;
	case 3:
	{
		cout << "zadania"<<endl;
	}
	break;
	case 4:
	{
		cout << "projekty" << endl;
		break;
	}
	

	default: cout << "Nie ma takiej opcji";
	}




	system("pause");



	return 0;



}

