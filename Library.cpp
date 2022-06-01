
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
    string knjiga;
    char next;
    while (1)
    {
        system("cls");
        cout << "---------------------------------------------------------------------------" << endl;
        cout << "                       DOBRODOSLI U KNJIZNICU\n" << endl;
        cout << "---------------------------------------------------------------------------" << endl;
        cout << "                       1 Prijava ucenika" << endl;
        cout << "                       2 Prijava knjiznicara" << endl;
        cout << "                       3 Izlaz" << endl;
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
            korisnik.open("korisnik.bin", ios::binary | ios::in);
            korisnik.read((char*)&kime, sizeof(kime));
            korisnik >> kime;
            korisnik.close();
            cout << "Pozdrav!  " << kime << endl;
            system("Pause");
            cout << "Ucitavam dostupni popis knjiga" << endl;
            cout << "\nMama je kriva za sve\n Pale sam na svijetu\n Kako si\n Putar i parizer\n Crvena voda\n " << endl;
            cout << "Upisite naziv knjige koje posudujete: ";
            cin >> knjiga;
            korisnik.open("korisnik.bin", ios::binary | ios::app);
            korisnik.write((char*)&knjiga, sizeof(knjiga));
            korisnik.close();
            system("pause");
        }
        if (izbor == 2)
        {
            break;
        }
        if (izbor == 3)
        {
            cout << "Pozdrav!" << endl;
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
