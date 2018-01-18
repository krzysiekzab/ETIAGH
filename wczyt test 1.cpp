#include <stdafx.h>
#include <dirnet.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <rapidxml.hpp>

using namespace std;
using namespace rapidxml;

string imie, nazwisko;
int nr_tel;
int nr_zadania;
int wybor;

int wybor_raport;

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
	    cout << "======= " << endl;
	    cout << "1.Pliki" << endl;
	    cout << "2.Raportuj" << endl;
	    cout << "." << endl;
	    cout << "=======" << endl;

	    cout << "Wybierz: ";
	    cin >> wybor_raport;
            switch (wybor_raport)
            case 1:{

                switch (reee)
                    case 1:
                        {
    fstream plik;
    plik.open( "projekty.txt", ios::in );
    if( plik.good() )
    {
        string napis;
        cout << "Projekty:" << endl;
        while( !plik.eof() )
        {
            getline( plik, napis );
            cout << napis << endl;
        }
        plik.close();
    } else cout << "Error! ..." << endl;

    getch();
    return( 0 );
}break;

                    case 2:{


        xml_document <> document;
        cout << document;

        print ( cout, document, 0);

        string test;
        print ( back_inserter( test ), document, 0);

        break;
        goto main();



            }break;
            return 0;
            }
            case 2:{
        xml_document <> document;
        cout << document;

        print ( cout, document, 0);

        string test;
        print ( back_inserter( test ), document, 0);


        cout << "" << endl;
        cout << "*****************************" << endl;

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
