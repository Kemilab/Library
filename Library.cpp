
#include <iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<fstream>

using namespace std;

int main()

{
	int choice;
	int bookN;
	char next;
	while (1)
	{
		system("cls");
		cout << "DOBRODOSLI U KNJIZNICU\n" << endl;
		cout << "1 Prijava ucenika" << endl;
		cout << "2 Prijava profesora" << endl;
		cout << "3 Prijava knjiznicara\n" << endl;
		cin >> choice;
		//different choices output
		if (choice == 1)
		{
			system("cls");
			cout << "Odabrali ste prijavu ucenika\n" << endl;
			cout << "Popis knjiga" << endl;//add folder
			cout << "Odaberite broj knjige" << endl;
			cin >> bookN;
			cout << "Opis knjige" << endl;//add folder
			cout << "Stisnite 'y' da nastavite" << endl;
			cin >> next;
			system("cls");
			cout << "Unesite svoje Ime, Prezime" << endl;
		}
  }
}
