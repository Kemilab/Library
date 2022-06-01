
#include <iostream>
#include<stdio.h>
#include <string.h>
#include<algorithm>
#include<math.h>
#include<fstream>

using namespace std;
void admin()
{
    int izbor = 0;
    while (izbor != 9)
    {
        cout << "\n\n Admin Login is Successful !! Press any key to continue..";
        cout << "\n1. Add Book";
        cout << "\n2. Update Book";
        cout << "\n3. Delete Book";
        cout << "\n4. List of All Books";
        cout << "\n9. Exit";
        cout << "\n\n Enter your choice : ";
        cin >> izbor;
        switch (izbor)
        {
        case 1:
            //addBook();
            break;
        case 2:
            //updateBook();
            break;
        case 3:
            //deleteBook();
            break;
        case 4:
            // listOfAllBooks();
            break;
        default:
            cout << "\n\n Invalid Choice. Press any key to continue..";
            getchar();
        }
        system("cls");
    }
}

int main()

{
    string knjiznicar;
    string Password;
    int izbor;
    int bookN;
    string kime;
    string knjiga;
    char next;
    while (izbor != 3)
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
            int izborK;
            cout << "1 Registracija" << endl;
            cout << "2 Prijava" << endl;
            cin >> izborK;
            //Options for libraryan
            //Sign up
            if(izborK==1)
            {
                string KNJIZNICAR;
                string PASSWORD;

                cout<<"\nUNESITE SVOJE KORISNICKO IME:";
                cin>>KNJIZNICAR;
                cout<<"\nUNESITE SVOJU SIFRU:";
                cin>>PASSWORD;
                system("cls");
                cout << "1 Registracija" << endl;
                cout << "2 Prijava" << endl;
            }
                izborK = 0;
                cin >> izborK;

            //Sign in
            if (izborK == 2)
            {
                string KNJIZNICAR;
                string PASSWORD;
                string knjiznicar;
                string Password;


                system("cls");
                cout << "\n ---------- Prijava knjiznicara -------";
                cout << "\n\n Upisite korisnicko ime: ";
                cin >> knjiznicar;
                cout << "\n Upisite lozinku:";
                cin >> Password;
                if(Password == PASSWORD)
                {
                    admin();
                }
                /*else
                {
                    cout << "Krivi korisnicki podatci!" << endl;
                    break;
                }*/

                system("cls");
            }
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
        return 0;
    }

}


