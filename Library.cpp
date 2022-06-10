
#include <iostream>
#include<stdio.h>
#include <string>
#include<algorithm>
#include<math.h>
#include<fstream>
#include <chrono>
#include <thread>
#include <windows.h> // for sleep()


using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds
using namespace std;
void admin()
{
    int izbor = 0;
    while (izbor != 9)
    {
        cout << "\n\n Prijava administratora je uspjesna !! Pritisnite bilo koju tipku da nastavite..";
        cout << "\n1. Dodaj knjigu";
        cout << "\n2. Azurirajte knjigu";
        cout << "\n3. Izbrisite knjigu";
        cout << "\n4. Lista svih knjiga";
        cout << "\n9. Izlaz";
        cout << "\n\n Unesite svoj odabir : ";
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
            cout << "\n\n Nevazeci izbor. Pritisnite bilo koju tipku da nastavite..";
            
        }
        system("cls");
    }
}

int main()

{
    string p1, p2, p3, p4, p5, p6, p7, p8;
    p1 = "Duh u mocvari";
    p2 = "Putar i parizer";
    p3 = "Pale sam na svijetu";
    p4 = "Kako si?";
    p5 = "Moze jos";
    p6 = "Gregor dnevnik";
    p7 = "10000 katastrofa";
    fstream datoteka("knjige.bin", ios::binary | ios::out);
    datoteka.write((char*)&p1, sizeof(p1));
    datoteka.write((char*)&p2, sizeof(p2));
    datoteka.write((char*)&p3, sizeof(p3));
    datoteka.write((char*)&p4, sizeof(p4));
    datoteka.write((char*)&p5, sizeof(p5));
    datoteka.write((char*)&p6, sizeof(p6));
    datoteka.close();
    cout << p1 << endl;
    string knjiznicar;
    string Password;
    int bookN;
    int izbor=1;
    int Uizbor = 1;
    string kime;
    string knjiga;
    while (izbor !=3)
    {
        system("cls");
        cout << "---------------------------------------------------------------------------" << endl;
        cout << "                       DOBRODOSLI U KNJIZNICU\n" << endl;
        cout << "---------------------------------------------------------------------------" << endl;
        cout << "                       1 Prijava ucenika" << endl;
        cout << "                       2 Prijava knjiznicara" << endl;
        cout << "                       3 Izlaz" << endl;
        cin >> izbor;
        
        if (izbor == 1)
        {
            //student login
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
            cout << "Pozdrav  " << kime << "!\n" << endl;
            cout << '-' << flush;
            for (;;) {
                Sleep(100);
                cout << "\b\\" << flush;
                Sleep(100);
                cout << "\b|" << flush;
                Sleep(100);
                cout << "\b/" << flush;
                Sleep(100);
                cout << "\b-" << flush;
                cout << "\b\\" << flush;
                Sleep(100);
                cout << "\b|" << flush;
                Sleep(100);
                cout << "\b/" << flush;
                Sleep(100);
                cout << "\b-" << flush;
                cout << "\b\\" << flush;
                Sleep(100);
                cout << "\b|" << flush;
                Sleep(100);
                cout << "\b/" << flush;
                Sleep(100);
                cout << "\b-" << flush;
                cout << "\b\\" << flush;
                Sleep(100);
                cout << "\b|" << flush;
                Sleep(100);
                cout << "\b/" << flush;
                Sleep(100);
                cout << "\b-" << flush;
                goto meni;
                
            }
                    

            //meni
            meni:
            system("cls");
            cout << "\nOdaberite jednu od sljedecih opcija: " << endl;
            cout << "1 Posudba knjige" << endl;
            cout << "2 Povratak knjige" << endl;
            cout << "3 Popis knjiga" << endl;
            cout << "4 Izlaz" << endl;
            cin >> Uizbor;

            //borrow
            if (Uizbor == 1)
            {
                system("cls");
                cout << "Ucitavam dostupni popis knjiga\n" << endl;
                datoteka.open("knjige.bin", ios::binary | ios::in);
                datoteka.read((char*)&p1, sizeof(p1));
                cout << p1 << endl;
                datoteka.read((char*)&p2, sizeof(p2));
                cout << p2 << endl;
                datoteka.read((char*)&p3, sizeof(p3));
                cout << p3 << endl;
                datoteka.read((char*)&p4, sizeof(p4));
                cout << p4 << endl;
                datoteka.read((char*)&p5, sizeof(p5));
                cout << p5 << endl;
                datoteka.read((char*)&p6, sizeof(p6));
                cout << p6 << endl;
                datoteka.close();

                korisnik.open("posudba.bin", ios::binary | ios::app);
                cout << "\nUnesite ime knjige: " << endl;
                cin.ignore();
                getline(cin, knjiga);
                korisnik.write((char*)&knjiga, sizeof(knjiga));
                korisnik.close();
                //cout << knjiga;
                korisnik.open("posudba.bin", ios::binary | ios::app);
                korisnik.read((char*)&knjiga, sizeof(knjiga));
                cout << "Upravo ste posudlil:", knjiga;
                cout << "Molimo pricekajte: 5s" << endl;
                sleep_for(seconds(1));
                cout << "                   4s" << endl;
                sleep_for(seconds(1));
                cout << "                   3s" << endl;
                sleep_for(seconds(1));
                cout << "                   2s" << endl;
                sleep_for(seconds(1));
                cout << "                   1s" << endl;
                sleep_for(seconds(1));
                goto meni;
            }

            //return
            if (Uizbor == 2)
            {
                system("cls");
                korisnik.open("posudba.bin", ios::binary | ios::app);
                korisnik.read((char*)&knjiga, sizeof(knjiga));
                cout << knjiga;
                system("Pause");
            }

            //List of books
            if (Uizbor == 3)
            {
                system("cls");
                cout << "Ucitavam dostupni popis knjiga\n" << endl;
                datoteka.open("knjige.bin", ios::binary | ios::in);
                datoteka.read((char*)&p1, sizeof(p1));
                cout << p1 << endl;
                datoteka.read((char*)&p2, sizeof(p2));
                cout << p2 << endl;
                datoteka.read((char*)&p3, sizeof(p3));
                cout << p3 << endl;
                datoteka.read((char*)&p4, sizeof(p4));
                cout << p4 << endl;
                datoteka.read((char*)&p5, sizeof(p5));
                cout << p5 << endl;
                datoteka.read((char*)&p6, sizeof(p6));
                cout << p6 << endl;
                datoteka.close();
                
                system("Pause");
                continue;
            }

            //exit
            if (Uizbor == 4)
            {
                //continue;
            }
        }

        if (izbor == 2)
        {
                int izborK;
                string KNJIZNICAR;
                string PASSWORD;
                string knjiznicar;
                string Password;
                cout << "1 Registracija" << endl;
                cout << "2 Prijava" << endl;
                cin >> izborK;
                //Options for libraryan
                //Sign up
            if (izborK == 1)
            {
                //prijava knjiznicara
                string KNJIZNICAR;
                string PASSWORD;

                cout << "\nUNESITE SVOJE KORISNICKO IME:";
                cin >> KNJIZNICAR;
                cout << "\nUNESITE SVOJU SIFRU:";
                cin >> PASSWORD;
                fstream datoteka("knjiznicar_prijava.bin", ios::binary | ios::app);
                datoteka.write((char*)&PASSWORD, sizeof(PASSWORD));
                datoteka.close();
                //PASSWORD se sprema
                system("pause");
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
                string pass;

                    system("cls");
                    cout << "\n ---------- Prijava knjiznicara -------";
                    cout << "\n\n Upisite korisnicko ime: ";
                    cin >> knjiznicar;
                    cout << "\n Upisite lozinku:";
                    cin >> Password;
                    datoteka.open("knjiznicar_prijava.bin", ios::binary | ios::out);
                    datoteka.read((char*)&PASSWORD, sizeof(PASSWORD));
                    
                    cout << PASSWORD;
                    int uspijeh = Password.compare(pass);
                    if (uspijeh == 0) {
                        admin();
                    }
                    else if(uspijeh !=0) {
                        cout << "Krivi korisnicki podatci!" << endl;
                        break;
                    }

                system("cls");
            }
        }

        if (izbor == 3)
        {
            cout << "Pozdrav!" << endl;
            break;
        }
       
        return 0;
    }

}


