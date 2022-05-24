
#include <iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<fstream>

using namespace std;

int main()

{
	int izbor;
	int bookN;
	string kime;
	string kime8;
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
