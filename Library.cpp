
#include <iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<fstream>
#include <thread>
#include <chrono>

using namespace std;

int main()

{
	int izbor;
	int bookN;
	int flag;
	string kime;
	string kime8;
	string knjiga;
	char next;
	while (1)
	{
		system("cls");
		cout << "DOBRODOSLI U KNJIZNICU\n" << endl;
		cout << "1 Prijava ucenika" << endl;
		cout << "2 Prijava profesora" << endl;
		cout << "3 Prijava knjiznicara\n" << endl;
		cin >> izbor;
		//different choices output
		if (izbor == 1)
		{
			fstream korisnik("korisnik.bin", ios::binary | ios::out);
			cout << "Odabrali ste prijavu ucenika!" << endl;
			cout << "Upisite korisnicko ime: ";
			cin >> kime;
			korisnik.write((char*)&kime, sizeof(kime));
			korisnik.close();
			korisnik.open("korisnik.bin", ios::binary | ios::out);
			korisnik.read((char*)&kime, sizeof(kime));
			korisnik >> kime;
			cout << "Pozdrav!  " << kime << endl;
			system("Pause");
			cout << "Uèitavam dostupni popis knjiga" << endl;
			//nekako uèitati knige iz datoteke
			cout << "Upisite naziv knjige koje posudujete: ";
			cin >> knjiga;
			// kako da se sadržaj datoteke ne izbriše


			
			
			


		}
		else if (izbor == 2)
		{
			break;
		}
		else
		{
			cout << "Krivi unos!" << endl;
			break;
		}
		
  }
	return 0;
}
