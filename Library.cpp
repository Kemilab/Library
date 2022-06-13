
#include <iostream>
#include <string>
#include<algorithm>
#include<math.h>
#include<fstream>
#include <chrono>
#include <thread>
#include <windows.h> // for sleep()
#include <stdio.h> 
#include <stdlib.h> 

using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds
using namespace std;

void blokiran_racun()//dodati oporavak baze tako da stvori datoteku za knjiznicara i da unese zadanu lozniku 1234 ili nešto
{
   cout << "Vas racune je blokiran" << endl;
   cout << "Za sigurnost sustava Vasi podatci ce biti izbrisani" << endl;
   sleep_for(seconds(3));
   int i = 0;
   char load[26];
   while (i < 25)
   {
       system("cls");
       load[i++] = '#';
       load[i] = '\0';

       printf("\n\nBRISANJE [%-25s]", load);
       remove("knjige.bin");
       sleep_for(milliseconds(300));
   }

   system("cls");
   printf("\n");

}
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

int main() {
    string p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, p39, p40, p41, p42, p43, p44, p45, p46, p47, p48, p49, p50;
    p1 = "1000 katastrofa";
    p2 = "99 vru?ih tragova";
    p3 = "Crvena voda";
    p4 = "Da Vin?ijev kod";
    p5 = "Dr Dolittle";
    p6 = "Duh u mo?vari";
    p7 = "Eko Eko";
    p8 = "Europski rije?nik";
    p9 = "Fahrenheit 451";
    p10 = "gegorov dnevnik";
    p11 = "Gospodar prstenova : Dvije kule";
    p12 = "Gospodar prstenova : Povratak kralja";
    p13 = "Gospodar prstenova : Prstenova druzina";
    p14 = "Gregorov dnevnik";
    p15 = "Gung Ho";
    p16 = "Harry Potter i Darovi smrti";
    p17 = "Harry Potter i Kamen mudraca";
    p18 = "Harry Potter i Odaja tajni";
    p19 = "Harry Potter i Plameni pehar";
    p20 = "Harry Potter i Princ miješane krvi";
    p21 = "Harry Potter i Red feniksa";
    p22 = "Harry Potter i Zatoceni Azkabana";
    p23 = "Hotel Zagorje";
    p24 = "Imperij";
    p25 = "IT";
    p26 = "Kako si";
    p27 = "Knjiga svijeta";
    p28 = "Koko I duhovi";
    p29 = "Marvel i ostala ?udesa";
    p30 = "Moze jos";
    p31 = "Narnija";
    p32 = "Nora";
    p33 = "Pale sam na svijetu";
    p34 = "Pale sam na svijetu";
    p35 = "Petar Pan";
    p36 = "Point Blank";
    p37 = "Poirot";
    p38 = "Posljednji Stipancici";
    p39 = "Putar I parizer";
    p40 = "Star Wars : Gospodari Sitha";
    p41 = "Star Wars : Krvna linija";
    p42 = "Star Wars : Nasljednik carstva";
    p43 = "Star Wars : Pala zvijezda";
    p44 = "Star Wars : Tarkin";
    p45 = "Star Wars : Thrawn";
    p46 = "Susjed";
    p47 = "Tisucu tragova";
    p48 = "Velike bitke II.svjetskog rata";
    p49 = "Zagonetni dje?ak";
    p50 = "Zivotinjska farma";
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
    int izbor = 0;
    int Uizbor = 0;
    string kime;
    string knjiga;
    while (izbor != 3)
    {
        system("cls");
        cout << "---------------------------------------------------------------------------" << endl;
        cout << "                       DOBRODOSLI U KNJIZNICU\n" << endl;
        cout << "---------------------------------------------------------------------------" << endl;
        cout << "                       1 Prijava ucenika" << endl;
        cout << "                       2 Prijava profesora" << endl;
        cout << "                       3 Prijava knjiznicara" << endl;
        cout << "                       4 prijava administratora" << endl;
        cout << "                       5 Izlaz" << endl;
        cout << "Odaberite opciju: ";
        cin >> izbor;

        //Student
        if (izbor == 1)
        {
            //student login
            system("cls");
            fstream korisnik("korisnik.bin", ios::binary | ios::out); //fstream korisnik("korisnik.bin", ios::binary | ios::app | ios::out);
            cout << "Odabrali ste prijavu ucenika!" << endl;
            cout << "Upisite korisnicko ime: ";
            cin >> kime;
            korisnik.write((char*)&kime, sizeof(kime));
            korisnik.close();
            korisnik.open("korisnik.bin", ios::binary | ios::in);
            korisnik.read((char*)&kime, sizeof(kime));
            korisnik >> kime;
            korisnik.close();
            cout << "Pozdrav! " << kime << "\nKreiram potrebne datoteke!" << "!\n" << endl;
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
                Sleep(100);
                cout << "\b/" << flush;
                Sleep(100);
                cout << "\b-" << flush;
                Sleep(100);
                cout << "\b/" << flush;
                Sleep(100);
                cout << "\b-" << flush;
                Sleep(100);
                cout << "\b/" << flush;
                Sleep(100);
                cout << "\b-" << flush;
                Sleep(100);
                cout << "\b/" << flush;
                Sleep(100);
                cout << "\b-" << flush;
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
            cout << "4 Pregled posudenih knjiga" << endl; // nije implementirano
            cout << "5 Izlaz" << endl;
            cout << "\n";
            cout << "Unos: ";
            cin >> Uizbor;

            //borrow
            if (Uizbor == 1)
            {
                int  posudba;
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
                cout << "\nUnesite ime knjige: ";
                cin.ignore();
                getline(cin, knjiga);
                korisnik.write((char*)&knjiga, sizeof(knjiga));
                korisnik.close();
                korisnik.open("posudba.bin", ios::binary | ios::app);
                korisnik.read((char*)&knjiga, sizeof(knjiga));
                cout << "Upravo ste posudlil: " << knjiga << endl;
                cout << "Molimo pricekajte: 5 sekundi" << endl;
                sleep_for(seconds(1));
                cout << "                   4 sekunde" << endl;
                sleep_for(seconds(1));
                cout << "                   3 sekunde" << endl;
                sleep_for(seconds(1));
                cout << "                   2 sekunde" << endl;
                sleep_for(seconds(1));
                cout << "                   1 sekunde" << endl;
                sleep_for(seconds(1));
                 goto meni;
                
                
            }

            //return
            else if (Uizbor == 2)// NE RADI
            {
                char izbor;
                system("cls");
                korisnik.open("posudba.bin", ios::binary | ios::in);
                korisnik.read((char*)&knjiga, sizeof(knjiga));
                cout << "Trenutno je posudjena: " << knjiga << endl;
                cout << "Zelite vratiti knjigu? (Y/N)" << endl;
                while (1)
                {
                    cin >> izbor;
                    cout << "Upisali ste: " << izbor << "\n";
                    sleep_for(seconds(2));
                    izbor = tolower(izbor);
                    if (izbor == 'y')
                    {
                        remove("posudba.bin");
                        cout << "Knjiga je vracena :)" << endl;
                        sleep_for(seconds(2));
                        goto meni;
                    }
                    else {
                        cout << "Povratak na izbornik";
                        goto meni;
                    }
                }
             
            }

            //List of books
            else if (Uizbor == 3)
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
                cout << "\nUnesite Y za nastavak: ";
                char Ulazy;
                cin >> Ulazy;
                if (Ulazy == 'y')
                {
                    goto meni;
                }
            }
            else if (Uizbor == 4) {
                korisnik.open("posudba.bin", ios::binary | ios::in);
                korisnik.read((char*)&knjiga, (sizeof(knjiga)));
                cout << "Trenutno je posudeno: " << knjiga << endl;
                sleep_for(seconds(4));
                goto meni;


            }

                //exit
                else if (Uizbor == 5)
                {
                continue;
                }
                else {
                    continue;
                }
        }



        //Lybrarian
        if (izbor == 3)
        {
            int izborK;
            string KNJIZNICAR;
            string PASSWORD;
            string knjiznicar;
            string Password;
            cout << "1 Registracija" << endl;
            cout << "2 Prijava" << endl;
            cout << "Odabire radnju: ";
            cin >> izborK;
            //Options for libraryan
            //Sign up
            if (izborK == 1)
            {
                //prijava knjiznicara
                string KNJIZNICAR;
                string PASSWORD;

                cout << "\nUNESITE SVOJE KORISNICKO IME: ";
                cin.ignore();
                getline(cin, KNJIZNICAR);
                cout << "\nUNESITE SVOJU SIFRU: ";
                getline(cin, PASSWORD);
                fstream datoteka("knjiznicar_prijava.bin", ios::binary | ios::out);
                datoteka.write((char*)&PASSWORD, sizeof(PASSWORD));
                datoteka.close();
                //PASSWORD se sprema
                cout << "PRIJAVA USPIJESNA"; // dodati zelenu boju
                sleep_for(seconds(1));
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
                int pokusaj = 0;
                while(pokusaj < 3){
                system("cls");
                cout << "\n ---------- Prijava knjiznicara -------";
                cout << "\n\n Upisite korisnicko ime: ";
                cin.ignore();
                getline(cin, knjiznicar);
                cout << "\n Upisite lozinku:";
                getline(cin, Password);
                datoteka.open("knjiznicar_prijava.bin", ios::binary | ios::in);
                datoteka.read((char*)&PASSWORD, sizeof(PASSWORD));
                if (PASSWORD == Password) {
                    admin();
                    datoteka.close();
                }
                else if (PASSWORD != Password) {
                    cout << "Krivi korisnicki podatci!" << endl;
                    pokusaj++;
                    cout << "\n";
                    cout << "Broj pokusaja " << pokusaj << " od mogucih 3" << endl;
                    sleep_for(seconds(3));
                    datoteka.close();
                }
                
                }
                cout << "Racun blokiran!" << endl;
                sleep_for(seconds(2));
                datoteka.close();
                remove("knjiznicar_prijava.bin");
                blokiran_racun();

            }
     
        }
            if (izbor == 5)
            {
              cout << "Pozdrav!" << endl;
              exit(5);
            }
    }
}
