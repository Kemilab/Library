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

void posudbe() {
    string kime;
    string knjiga;
    fstream korisnik("posudba.bin", ios::binary | ios::app);
    fstream datoteka("korisnik.bin", ios::binary | ios::app);
    datoteka.open("korisnik.bin", ios::binary | ios::app);
    datoteka.read((char*)&kime, sizeof(kime));
    korisnik.open("posudba.bin", ios::binary | ios::app);
    cout << "UCENIK " << kime << " JE POSUDIO " << knjiga;
    sleep_for(seconds(2));
    korisnik.close();
    datoteka.close();


}

void lista() {
    fstream datoteka("knjige.bin", ios::binary | ios::out);

    string p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, p39, p40, p41, p42, p43, p44, p45, p46, p47, p48, p49, p50;
    p1 = "  1000 katastrofa";
    p2 = "  99 vrucih tragova";
    p3 = "  Crvena voda";
    p4 = "  Da Vincijev kod";
    p5 = "  Dr Dolittle";
    p6 = "  Duh u mocvari";
    p7 = "  Eko Eko";
    p8 = "  Europski rijecnik";
    p9 = "  Fahrenheit 451";
    p10 = "  Gegorov dnevnik";
    p11 = "  Gospodar prstenova : Dvije kule";
    p12 = "  Gospodar prstenova : Povratak kralja";
    p13 = "  Gospodar prstenova : Prstenova druzina";
    p14 = "  Gregorov dnevnik";
    p15 = "  Gung Ho";
    p16 = "  Harry Potter i Darovi smrti";
    p17 = "  Harry Potter i Kamen mudraca";
    p18 = "  Harry Potter i Odaja tajni";
    p19 = "  Harry Potter i Plameni pehar";
    p20 = "  Harry Potter i Princ mijesane krvi";
    p21 = "  Harry Potter i Red feniksa";
    p22 = "  Harry Potter i Zatoceni Azkabana";
    p23 = "  Hotel Zagorje";
    p24 = "  Imperij";
    p25 = "  IT";
    p26 = "  Kako si";
    p27 = "  Knjiga svijeta";
    p28 = "  Koko I duhovi";
    p29 = "  Marvel i ostala cudesa";
    p30 = "  Moze jos";
    p31 = "  Narnija";
    p32 = "  Nora";
    p33 = "  Pale sam na svijetu";
    p34 = "  Pale sam na svijetu";
    p35 = "  Petar Pan";
    p36 = "  Point Blank";
    p37 = "  Poirot";
    p38 = "  Posljednji Stipancici";
    p39 = "  Putar I parizer";
    p40 = "  Star Wars : Gospodari Sitha";
    p41 = "  Star Wars : Krvna linija";
    p42 = "  Star Wars : Nasljednik carstva";
    p43 = "  Star Wars : Pala zvijezda";
    p44 = "  Star Wars : Tarkin";
    p45 = "  Star Wars : Thrawn";
    p46 = "  Susjed";
    p47 = "  Tisucu tragova";
    p48 = "  Velike bitke II.svjetskog rata";
    p49 = "  Zagonetni djecak";
    p50 = "  Zivotinjska farma";
    datoteka.write((char*)&p1, sizeof(p1));
    datoteka.write((char*)&p2, sizeof(p2));
    datoteka.write((char*)&p3, sizeof(p3));
    datoteka.write((char*)&p4, sizeof(p4));
    datoteka.write((char*)&p5, sizeof(p5));
    datoteka.write((char*)&p6, sizeof(p6));
    datoteka.write((char*)&p7, sizeof(p7));
    datoteka.write((char*)&p8, sizeof(p8));
    datoteka.write((char*)&p9, sizeof(p9));
    datoteka.write((char*)&p10, sizeof(p10));
    datoteka.write((char*)&p11, sizeof(p11));
    datoteka.write((char*)&p12, sizeof(p12));
    datoteka.write((char*)&p13, sizeof(p13));
    datoteka.write((char*)&p14, sizeof(p14));
    datoteka.write((char*)&p15, sizeof(p15));
    datoteka.write((char*)&p16, sizeof(p16));
    datoteka.write((char*)&p17, sizeof(p17));
    datoteka.write((char*)&p18, sizeof(p18));
    datoteka.write((char*)&p19, sizeof(p19));
    datoteka.write((char*)&p20, sizeof(p20));
    datoteka.write((char*)&p21, sizeof(p21));
    datoteka.write((char*)&p22, sizeof(p22));
    datoteka.write((char*)&p23, sizeof(p23));
    datoteka.write((char*)&p24, sizeof(p24));
    datoteka.write((char*)&p25, sizeof(p25));
    datoteka.write((char*)&p26, sizeof(p26));
    datoteka.write((char*)&p27, sizeof(p27));
    datoteka.write((char*)&p28, sizeof(p28));
    datoteka.write((char*)&p29, sizeof(p29));
    datoteka.write((char*)&p30, sizeof(p30));
    datoteka.write((char*)&p31, sizeof(p31));
    datoteka.write((char*)&p32, sizeof(p32));
    datoteka.write((char*)&p33, sizeof(p33));
    datoteka.write((char*)&p34, sizeof(p34));
    datoteka.write((char*)&p35, sizeof(p35));
    datoteka.write((char*)&p36, sizeof(p36));
    datoteka.write((char*)&p37, sizeof(p37));
    datoteka.write((char*)&p38, sizeof(p38));
    datoteka.write((char*)&p39, sizeof(p39));
    datoteka.write((char*)&p40, sizeof(p40));
    datoteka.write((char*)&p41, sizeof(p41));
    datoteka.write((char*)&p42, sizeof(p42));
    datoteka.write((char*)&p43, sizeof(p43));
    datoteka.write((char*)&p44, sizeof(p44));
    datoteka.write((char*)&p45, sizeof(p45));
    datoteka.write((char*)&p46, sizeof(p46));
    datoteka.write((char*)&p47, sizeof(p47));
    datoteka.write((char*)&p48, sizeof(p48));
    datoteka.write((char*)&p49, sizeof(p49));
    datoteka.write((char*)&p50, sizeof(p50));
    datoteka.close();

    cout << "UCITAVAMO DOSTUPNI POPIS KNJIGA\n" << endl;
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
    datoteka.read((char*)&p7, sizeof(p7));
    cout << p7 << endl;
    datoteka.read((char*)&p8, sizeof(p8));
    cout << p8 << endl;
    datoteka.read((char*)&p9, sizeof(p9));
    cout << p9 << endl;
    datoteka.read((char*)&p10, sizeof(p10));
    cout << p10 << endl;
    datoteka.read((char*)&p11, sizeof(p11));
    cout << p11 << endl;
    datoteka.read((char*)&p12, sizeof(p12));
    cout << p12 << endl;
    datoteka.read((char*)&p13, sizeof(p13));
    cout << p13 << endl;
    datoteka.read((char*)&p14, sizeof(p14));
    cout << p14 << endl;
    datoteka.read((char*)&p15, sizeof(p15));
    cout << p15 << endl;
    datoteka.read((char*)&p16, sizeof(p16));
    cout << p16 << endl;
    datoteka.read((char*)&p17, sizeof(p17));
    cout << p17 << endl;
    datoteka.read((char*)&p18, sizeof(p18));
    cout << p18 << endl;
    datoteka.read((char*)&p19, sizeof(p19));
    cout << p19 << endl;
    datoteka.read((char*)&p20, sizeof(p20));
    cout << p20 << endl;
    datoteka.read((char*)&p21, sizeof(p21));
    cout << p21 << endl;
    datoteka.read((char*)&p22, sizeof(p22));
    cout << p22 << endl;
    datoteka.read((char*)&p23, sizeof(p23));
    cout << p23 << endl;
    datoteka.read((char*)&p24, sizeof(p24));
    cout << p24 << endl;
    datoteka.read((char*)&p25, sizeof(p25));
    cout << p25 << endl;
    datoteka.read((char*)&p26, sizeof(p26));
    cout << p26 << endl;
    datoteka.read((char*)&p27, sizeof(p27));
    cout << p27 << endl;
    datoteka.read((char*)&p28, sizeof(p28));
    cout << p28 << endl;
    datoteka.read((char*)&p29, sizeof(p29));
    cout << p29 << endl;
    datoteka.read((char*)&p30, sizeof(p30));
    cout << p30 << endl;
    datoteka.read((char*)&p31, sizeof(p31));
    cout << p31 << endl;
    datoteka.read((char*)&p32, sizeof(p32));
    cout << p32 << endl;
    datoteka.read((char*)&p33, sizeof(p33));
    cout << p33 << endl;
    datoteka.read((char*)&p34, sizeof(p34));
    cout << p34 << endl;
    datoteka.read((char*)&p35, sizeof(p35));
    cout << p35 << endl;
    datoteka.read((char*)&p36, sizeof(p36));
    cout << p36 << endl;
    datoteka.read((char*)&p37, sizeof(p37));
    cout << p37 << endl;
    datoteka.read((char*)&p38, sizeof(p38));
    cout << p38 << endl;
    datoteka.read((char*)&p39, sizeof(p39));
    cout << p39 << endl;
    datoteka.read((char*)&p40, sizeof(p40));
    cout << p40 << endl;
    datoteka.read((char*)&p41, sizeof(p41));
    cout << p41 << endl;
    datoteka.read((char*)&p42, sizeof(p42));
    cout << p42 << endl;
    datoteka.read((char*)&p43, sizeof(p43));
    cout << p43 << endl;
    datoteka.read((char*)&p44, sizeof(p44));
    cout << p44 << endl;
    datoteka.read((char*)&p45, sizeof(p45));
    cout << p45 << endl;
    datoteka.read((char*)&p46, sizeof(p46));
    cout << p46 << endl;
    datoteka.read((char*)&p47, sizeof(p47));
    cout << p47 << endl;
    datoteka.read((char*)&p48, sizeof(p48));
    cout << p48 << endl;
    datoteka.read((char*)&p49, sizeof(p49));
    cout << p49 << endl;
    datoteka.read((char*)&p50, sizeof(p50));
    cout << p50 << endl;
    datoteka.close();
    system("pause");

}

void dodaj_knjigu() {
    string knjiga;
    fstream datoteka("knjige.bin", ios::binary | ios::app);
    datoteka.open("knjige.bin", ios::binary | ios::app);
    cout << "\nUNESITE IME KNJIGE: ";
    cin.ignore();
    getline(cin, knjiga);
    datoteka.write((char*)&knjiga, sizeof(knjiga));
    datoteka.close();
}

void blokiran_racun()//dodati oporavak baze tako da stvori datoteku za knjiznicara i da unese zadanu lozniku 1234 ili nesto
{
    system("cls");
    cout << "VAS RACUN JE BLOKIRAN" << endl;
    cout << "ZA SIGURNOST SUSTAVA VASI PODATCI CE BITI IZBRISANI" << endl;
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
    cout << "ZA NASTAVAK POZOVITE ADMINISTRATORA:";
}

void knjiz()
{
    int izbor = 0;
    while (izbor != 9)
    {
        cout << "\n\n ---------- PRIJAVA KNJIZNICARA JE USPJESNA ----------";
        cout << "\n1. Dodaj knjigu";
        cout << "\n2. Azurirajte knjigu";
        cout << "\n3. Izbrisite knjigu";
        cout << "\n4. Izlaz";
        cout << "\n\n Unesite svoj odabir : ";
        cin >> izbor;
        switch (izbor)
        {
        case 1:
            dodaj_knjigu();
            break;
        case 2:
            lista();
            break;
        case 3:
            posudbe();
            break;
        case 4:
            exit(5);
        default:
            cout << "\n\n NEVAZECI IZBOR. PRITISNITE BILO KOJU TIPKU DA NASTAVITE..";

        }
        system("cls");
    }
}

int main() {
    fstream korisnik("posudba.bin", ios::binary | ios::out);
    fstream datoteka("knjige.bin", ios::binary | ios::out);

    string p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, p39, p40, p41, p42, p43, p44, p45, p46, p47, p48, p49, p50;
    p1 = "  1000 katastrofa";
    p2 = "  99 vrucih tragova";
    p3 = "  Crvena voda";
    p4 = "  Da Vincijev kod";
    p5 = "  Dr Dolittle";
    p6 = "  Duh u mocvari";
    p7 = "  Eko Eko";
    p8 = "  Europski rijecnik";
    p9 = "  Fahrenheit 451";
    p10 = "  Gegorov dnevnik";
    p11 = "  Gospodar prstenova : Dvije kule";
    p12 = "  Gospodar prstenova : Povratak kralja";
    p13 = "  Gospodar prstenova : Prstenova druzina";
    p14 = "  Gregorov dnevnik";
    p15 = "  Gung Ho";
    p16 = "  Harry Potter i Darovi smrti";
    p17 = "  Harry Potter i Kamen mudraca";
    p18 = "  Harry Potter i Odaja tajni";
    p19 = "  Harry Potter i Plameni pehar";
    p20 = "  Harry Potter i Princ mije�ane krvi";
    p21 = "  Harry Potter i Red feniksa";
    p22 = "  Harry Potter i Zatoceni Azkabana";
    p23 = "  Hotel Zagorje";
    p24 = "  Imperij";
    p25 = "  IT";
    p26 = "  Kako si";
    p27 = "  Knjiga svijeta";
    p28 = "  Koko I duhovi";
    p29 = "  Marvel i ostala cudesa";
    p30 = "  Moze jos";
    p31 = "  Narnija";
    p32 = "  Nora";
    p33 = "  Pale sam na svijetu";
    p34 = "  Pale sam na svijetu";
    p35 = "  Petar Pan";
    p36 = "  Point Blank";
    p37 = "  Poirot";
    p38 = "  Posljednji Stipancici";
    p39 = "  Putar I parizer";
    p40 = "  Star Wars : Gospodari Sitha";
    p41 = "  Star Wars : Krvna linija";
    p42 = "  Star Wars : Nasljednik carstva";
    p43 = "  Star Wars : Pala zvijezda";
    p44 = "  Star Wars : Tarkin";
    p45 = "  Star Wars : Thrawn";
    p46 = "  Susjed";
    p47 = "  Tisucu tragova";
    p48 = "  Velike bitke II.svjetskog rata";
    p49 = "  Zagonetni djecak";
    p50 = "  Zivotinjska farma";
    datoteka.write((char*)&p1, sizeof(p1));
    datoteka.write((char*)&p2, sizeof(p2));
    datoteka.write((char*)&p3, sizeof(p3));
    datoteka.write((char*)&p4, sizeof(p4));
    datoteka.write((char*)&p5, sizeof(p5));
    datoteka.write((char*)&p6, sizeof(p6));
    datoteka.write((char*)&p7, sizeof(p7));
    datoteka.write((char*)&p8, sizeof(p8));
    datoteka.write((char*)&p9, sizeof(p9));
    datoteka.write((char*)&p10, sizeof(p10));
    datoteka.write((char*)&p11, sizeof(p11));
    datoteka.write((char*)&p12, sizeof(p12));
    datoteka.write((char*)&p13, sizeof(p13));
    datoteka.write((char*)&p14, sizeof(p14));
    datoteka.write((char*)&p15, sizeof(p15));
    datoteka.write((char*)&p16, sizeof(p16));
    datoteka.write((char*)&p17, sizeof(p17));
    datoteka.write((char*)&p18, sizeof(p18));
    datoteka.write((char*)&p19, sizeof(p19));
    datoteka.write((char*)&p20, sizeof(p20));
    datoteka.write((char*)&p21, sizeof(p21));
    datoteka.write((char*)&p22, sizeof(p22));
    datoteka.write((char*)&p23, sizeof(p23));
    datoteka.write((char*)&p24, sizeof(p24));
    datoteka.write((char*)&p25, sizeof(p25));
    datoteka.write((char*)&p26, sizeof(p26));
    datoteka.write((char*)&p27, sizeof(p27));
    datoteka.write((char*)&p28, sizeof(p28));
    datoteka.write((char*)&p29, sizeof(p29));
    datoteka.write((char*)&p30, sizeof(p30));
    datoteka.write((char*)&p31, sizeof(p31));
    datoteka.write((char*)&p32, sizeof(p32));
    datoteka.write((char*)&p33, sizeof(p33));
    datoteka.write((char*)&p34, sizeof(p34));
    datoteka.write((char*)&p35, sizeof(p35));
    datoteka.write((char*)&p36, sizeof(p36));
    datoteka.write((char*)&p37, sizeof(p37));
    datoteka.write((char*)&p38, sizeof(p38));
    datoteka.write((char*)&p39, sizeof(p39));
    datoteka.write((char*)&p40, sizeof(p40));
    datoteka.write((char*)&p41, sizeof(p41));
    datoteka.write((char*)&p42, sizeof(p42));
    datoteka.write((char*)&p43, sizeof(p43));
    datoteka.write((char*)&p44, sizeof(p44));
    datoteka.write((char*)&p45, sizeof(p45));
    datoteka.write((char*)&p46, sizeof(p46));
    datoteka.write((char*)&p47, sizeof(p47));
    datoteka.write((char*)&p48, sizeof(p48));
    datoteka.write((char*)&p49, sizeof(p49));
    datoteka.write((char*)&p50, sizeof(p50));
    datoteka.close();
    string knjiznicar;
    string Password;
    int bookN;
    int izbor = 0;
    int Uizbor = 0;
    string kime;
    string knjiga;
    knjiga = '\0';
    while (izbor != 5)
    {
        pocetak:
        system("cls");
        cout << "---------------------------------------------------------------------------" << endl;
        cout << "                       DOBRODOSLI U KNJIZNICU\n" << endl;
        cout << "---------------------------------------------------------------------------" << endl;
        cout << "                       1 Prijava ucenika" << endl;
        cout << "                       2 Prijava profesora" << endl;
        cout << "                       3 Prijava knjiznicara" << endl;
        cout << "                       4 Prijava administratora" << endl;
        cout << "                       5 Izlaz" << endl;
        cout << "                                                                           " << endl;
        cout << "\nODABERITE OPCIJU: ";
        cin >> izbor;

        //Student
        if (izbor == 1)
        {
            //student login
            system("cls");
            fstream korisnik("korisnik.bin", ios::binary | ios::out); //fstream korisnik("korisnik.bin", ios::binary | ios::app | ios::out);
            cout << " ODABRALI STE PRIJAVU UCENIKA!" << endl;
            cout << "Upisite korisnicko ime: ";
            cin >> kime;
            korisnik.write((char*)&kime, sizeof(kime));
            korisnik.close();
            korisnik.open("korisnik.bin", ios::binary | ios::in);
            korisnik.read((char*)&kime, sizeof(kime));
            korisnik >> kime;
            korisnik.close();
            cout << "POZDRAV! " << kime << "\nKREIRAMO POTREBNE DATOTEKE!" << "!\n" << endl;
            cout << '-' << flush;
            for (;;) {
                Sleep(50);
                cout << "\b\\" << flush;
                Sleep(50);
                cout << "\b|" << flush;
                Sleep(50);
                cout << "\b/" << flush;
                Sleep(50);
                cout << "\b-" << flush;
                cout << "\b\\" << flush;
                Sleep(50);
                cout << "\b|" << flush;
                Sleep(50);
                cout << "\b/" << flush;
                Sleep(50);
                cout << "\b-" << flush;
                cout << "\b\\" << flush;
                Sleep(50);
                cout << "\b|" << flush;
                Sleep(50);
                cout << "\b/" << flush;
                Sleep(50);
                cout << "\b-" << flush;
                cout << "\b\\" << flush;
                Sleep(50);
                cout << "\b|" << flush;
                Sleep(50);
                cout << "\b/" << flush;
                Sleep(50);
                cout << "\b-" << flush;
                Sleep(50);
                cout << "\b/" << flush;
                Sleep(50);
                cout << "\b-" << flush;
                Sleep(50);
                cout << "\b/" << flush;
                Sleep(50);
                cout << "\b-" << flush;
                Sleep(50);
                cout << "\b/" << flush;
                Sleep(50);
                cout << "\b-" << flush;
                Sleep(50);
                cout << "\b/" << flush;
                Sleep(50);
                cout << "\b-" << flush;
                Sleep(50);
                cout << "\b/" << flush;
                Sleep(50);
                cout << "\b-" << flush;
                goto meni;

            }

            //meni
        meni:
            system("cls");
            cout << "\n ---------- ODABERITE JEDNU OD SLJEDECIH OPCIJA ---------- " << endl;
            cout << "1 Posudba knjige" << endl;
            cout << "2 Povratak knjige" << endl;
            cout << "3 Popis knjiga" << endl;
            cout << "4 Pregled posudenih knjiga" << endl; // nije implementirano
            cout << "5 Izlaz" << endl;
            cout << "\n";
            cout << "UNOS: ";
            cin >> Uizbor;

            //borrow
            if (Uizbor == 1)
            {
                int  posudba;
                system("cls");
                cout << "UCITAVAMO DOSTUPNI POPIS KNJIGA\n" << endl;
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
                datoteka.read((char*)&p7, sizeof(p7));
                cout << p7 << endl;
                datoteka.read((char*)&p8, sizeof(p8));
                cout << p8 << endl;
                datoteka.read((char*)&p9, sizeof(p9));
                cout << p9 << endl;
                datoteka.read((char*)&p10, sizeof(p10));
                cout << p10 << endl;
                datoteka.read((char*)&p11, sizeof(p11));
                cout << p11 << endl;
                datoteka.read((char*)&p12, sizeof(p12));
                cout << p12 << endl;
                datoteka.read((char*)&p13, sizeof(p13));
                cout << p13 << endl;
                datoteka.read((char*)&p14, sizeof(p14));
                cout << p14 << endl;
                datoteka.read((char*)&p15, sizeof(p15));
                cout << p15 << endl;
                datoteka.read((char*)&p16, sizeof(p16));
                cout << p16 << endl;
                datoteka.read((char*)&p17, sizeof(p17));
                cout << p17 << endl;
                datoteka.read((char*)&p18, sizeof(p18));
                cout << p18 << endl;
                datoteka.read((char*)&p19, sizeof(p19));
                cout << p19 << endl;
                datoteka.read((char*)&p20, sizeof(p20));
                cout << p20 << endl;
                datoteka.read((char*)&p21, sizeof(p21));
                cout << p21 << endl;
                datoteka.read((char*)&p22, sizeof(p22));
                cout << p22 << endl;
                datoteka.read((char*)&p23, sizeof(p23));
                cout << p23 << endl;
                datoteka.read((char*)&p24, sizeof(p24));
                cout << p24 << endl;
                datoteka.read((char*)&p25, sizeof(p25));
                cout << p25 << endl;
                datoteka.read((char*)&p26, sizeof(p26));
                cout << p26 << endl;
                datoteka.read((char*)&p27, sizeof(p27));
                cout << p27 << endl;
                datoteka.read((char*)&p28, sizeof(p28));
                cout << p28 << endl;
                datoteka.read((char*)&p29, sizeof(p29));
                cout << p29 << endl;
                datoteka.read((char*)&p30, sizeof(p30));
                cout << p30 << endl;
                datoteka.read((char*)&p31, sizeof(p31));
                cout << p31 << endl;
                datoteka.read((char*)&p32, sizeof(p32));
                cout << p32 << endl;
                datoteka.read((char*)&p33, sizeof(p33));
                cout << p33 << endl;
                datoteka.read((char*)&p34, sizeof(p34));
                cout << p34 << endl;
                datoteka.read((char*)&p35, sizeof(p35));
                cout << p35 << endl;
                datoteka.read((char*)&p36, sizeof(p36));
                cout << p36 << endl;
                datoteka.read((char*)&p37, sizeof(p37));
                cout << p37 << endl;
                datoteka.read((char*)&p38, sizeof(p38));
                cout << p38 << endl;
                datoteka.read((char*)&p39, sizeof(p39));
                cout << p39 << endl;
                datoteka.read((char*)&p40, sizeof(p40));
                cout << p40 << endl;
                datoteka.read((char*)&p41, sizeof(p41));
                cout << p41 << endl;
                datoteka.read((char*)&p42, sizeof(p42));
                cout << p42 << endl;
                datoteka.read((char*)&p43, sizeof(p43));
                cout << p43 << endl;
                datoteka.read((char*)&p44, sizeof(p44));
                cout << p44 << endl;
                datoteka.read((char*)&p45, sizeof(p45));
                cout << p45 << endl;
                datoteka.read((char*)&p46, sizeof(p46));
                cout << p46 << endl;
                datoteka.read((char*)&p47, sizeof(p47));
                cout << p47 << endl;
                datoteka.read((char*)&p48, sizeof(p48));
                cout << p48 << endl;
                datoteka.read((char*)&p49, sizeof(p49));
                cout << p49 << endl;
                datoteka.read((char*)&p50, sizeof(p50));
                cout << p50 << endl;
                datoteka.close();

                korisnik.open("posudba.bin", ios::binary | ios::app);
                cout << "\nUNESITE IME KNJIGE: ";
                cin.ignore();
                getline(cin, knjiga);
                korisnik.write((char*)&knjiga, sizeof(knjiga));
                korisnik.close();
                korisnik.open("posudba.bin", ios::binary | ios::app);
                korisnik.read((char*)&knjiga, sizeof(knjiga));
                cout << "UPRAVO STE POSUDILI: " << knjiga << endl;
                cout << "MOLIMO PRICEKAJTE..";//popravi ispis
                sleep_for(seconds(1));
                sleep_for(seconds(1));
                sleep_for(seconds(1));
                goto meni;


            }

            //return
            else if (Uizbor == 2)// NE RADI
            {
                knjiga = '\0';
                char izbor;
                system("cls");
                korisnik.open("posudba.bin", ios::binary | ios::in);
                korisnik.read((char*)&knjiga, sizeof(knjiga));
                cout << "Trenutno je posudjena: " << knjiga << endl;
                cout << "Zelite vratiti knjigu? (Y/N)" << endl;
                korisnik.close();
                while (1)
                {
                    cin >> izbor;
                    cout << "Upisali ste: " << izbor << "\n";
                    sleep_for(seconds(2));
                    izbor = tolower(izbor);
                    if (izbor == 'y')
                    {
                        korisnik.open("posudba.bin", ios::binary | ios::out);
                        korisnik.close();
                        cout << "Knjiga je vracena :)" << endl;
                        sleep_for(seconds(2));
                        knjiga = '\0';
                        goto meni;
                    }
                    else {
                        cout << "Povratak na izbornik";
                        sleep_for(seconds(1));
                        goto meni;
                    }
                }

            }

            //List of books
            else if (Uizbor == 3)
            {
                system("cls");
                cout << "UCITAVAMO DOSTUPNI POPIS KNJIGA\n" << endl;
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
                datoteka.read((char*)&p7, sizeof(p7));
                cout << p7 << endl;
                datoteka.read((char*)&p8, sizeof(p8));
                cout << p8 << endl;
                datoteka.read((char*)&p9, sizeof(p9));
                cout << p9 << endl;
                datoteka.read((char*)&p10, sizeof(p10));
                cout << p10 << endl;
                datoteka.read((char*)&p11, sizeof(p11));
                cout << p11 << endl;
                datoteka.read((char*)&p12, sizeof(p12));
                cout << p12 << endl;
                datoteka.read((char*)&p13, sizeof(p13));
                cout << p13 << endl;
                datoteka.read((char*)&p14, sizeof(p14));
                cout << p14 << endl;
                datoteka.read((char*)&p15, sizeof(p15));
                cout << p15 << endl;
                datoteka.read((char*)&p16, sizeof(p16));
                cout << p16 << endl;
                datoteka.read((char*)&p17, sizeof(p17));
                cout << p17 << endl;
                datoteka.read((char*)&p18, sizeof(p18));
                cout << p18 << endl;
                datoteka.read((char*)&p19, sizeof(p19));
                cout << p19 << endl;
                datoteka.read((char*)&p20, sizeof(p20));
                cout << p20 << endl;
                datoteka.read((char*)&p21, sizeof(p21));
                cout << p21 << endl;
                datoteka.read((char*)&p22, sizeof(p22));
                cout << p22 << endl;
                datoteka.read((char*)&p23, sizeof(p23));
                cout << p23 << endl;
                datoteka.read((char*)&p24, sizeof(p24));
                cout << p24 << endl;
                datoteka.read((char*)&p25, sizeof(p25));
                cout << p25 << endl;
                datoteka.read((char*)&p26, sizeof(p26));
                cout << p26 << endl;
                datoteka.read((char*)&p27, sizeof(p27));
                cout << p27 << endl;
                datoteka.read((char*)&p28, sizeof(p28));
                cout << p28 << endl;
                datoteka.read((char*)&p29, sizeof(p29));
                cout << p29 << endl;
                datoteka.read((char*)&p30, sizeof(p30));
                cout << p30 << endl;
                datoteka.read((char*)&p31, sizeof(p31));
                cout << p31 << endl;
                datoteka.read((char*)&p32, sizeof(p32));
                cout << p32 << endl;
                datoteka.read((char*)&p33, sizeof(p33));
                cout << p33 << endl;
                datoteka.read((char*)&p34, sizeof(p34));
                cout << p34 << endl;
                datoteka.read((char*)&p35, sizeof(p35));
                cout << p35 << endl;
                datoteka.read((char*)&p36, sizeof(p36));
                cout << p36 << endl;
                datoteka.read((char*)&p37, sizeof(p37));
                cout << p37 << endl;
                datoteka.read((char*)&p38, sizeof(p38));
                cout << p38 << endl;
                datoteka.read((char*)&p39, sizeof(p39));
                cout << p39 << endl;
                datoteka.read((char*)&p40, sizeof(p40));
                cout << p40 << endl;
                datoteka.read((char*)&p41, sizeof(p41));
                cout << p41 << endl;
                datoteka.read((char*)&p42, sizeof(p42));
                cout << p42 << endl;
                datoteka.read((char*)&p43, sizeof(p43));
                cout << p43 << endl;
                datoteka.read((char*)&p44, sizeof(p44));
                cout << p44 << endl;
                datoteka.read((char*)&p45, sizeof(p45));
                cout << p45 << endl;
                datoteka.read((char*)&p46, sizeof(p46));
                cout << p46 << endl;
                datoteka.read((char*)&p47, sizeof(p47));
                cout << p47 << endl;
                datoteka.read((char*)&p48, sizeof(p48));
                cout << p48 << endl;
                datoteka.read((char*)&p49, sizeof(p49));
                cout << p49 << endl;
                datoteka.read((char*)&p50, sizeof(p50));
                cout << p50 << endl;
                datoteka.close();
                cout << "\nUNESITE Y ZA NASTAVAK: ";
                char Ulazy;
                cin >> Ulazy;
                if (Ulazy == 'y')
                {
                    goto meni;
                }
            }

            //trenutno posudeno
            else if (Uizbor == 4) {
                korisnik.open("posudba.bin", ios::binary | ios::out);
                korisnik.read((char*)&knjiga, (sizeof(knjiga)));
                cout << "TRENUTNO JE POSUDZENO: " << knjiga << endl;
                korisnik.close();
                //knjiga = '\0';
                sleep_for(seconds(2));
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

        //Professor
        if (izbor == 2)
        {
            int izborP;
            string PROFESOR;
            string PASSWORDP;
            string profesor;
            string PasswordP;
            cout << "1 Registracija" << endl;
            cout << "2 Prijava" << endl;
            cout << "\nODABERITE RADNJU: ";
            cin >> izborP;
            //Options for professor
            //Sign up
            if (izborP == 1)
            {
                //prijava profesora
                ifstream datoteka;
                datoteka.open("profesor_prijava.bin");
                if (datoteka) {
                    cout << "DATOTEKA VEC POSTOJI" << endl;
                    cout << "\n";
                    cout << "VRACANJE NA REGISTRACIJU" << endl;
                    sleep_for(seconds(1));
                }
                else {
                    string PROFESOR;
                    string PASSWORDP;
                    cout << "\nUNESITE SVOJE KORISNICKO IME: ";
                    cin.ignore();
                    getline(cin, PROFESOR);
                    cout << "\nUNESITE SVOJU SIFRU: ";
                    getline(cin, PASSWORDP);
                    fstream datoteka("profesor_prijava.bin", ios::binary | ios::app);
                    datoteka.write((char*)&PASSWORDP, sizeof(PASSWORDP));
                    datoteka.close();
                }
                //PASSWORDP se sprema
                cout << "\n";
                cout << "REGISTRACIJA USPIJESNA"; // dodati zelenu boju
                sleep_for(seconds(1));
                system("cls");
                cout << "1 Registracija" << endl;
                cout << "2 Prijava" << endl;
            }
            izborP = 0;
            cin >> izborP;
            //Sign in
            if (izborP == 2)
            {
                string PROFESOR;
                string PASSWORDP;
                string profesor;
                string PasswordP;
                string passP;
                int pokusajP = 0;
                while (pokusajP < 3) {
                    system("cls");
                    cout << "\n ---------- PRIJAVA PROFESORA ---------- ";
                    cout << "\n\n Upisite korisnicko ime: ";
                    cin.ignore();
                    getline(cin, profesor);
                    cout << "\n Upisite lozinku:";
                    getline(cin, PasswordP);
                    datoteka.open("profesor_prijava.bin", ios::binary | ios::in);
                    datoteka.read((char*)&PASSWORDP, sizeof(PASSWORDP));
                    if (PASSWORDP == PasswordP)
                    {
                        korisnik.open("posudba.bin", ios::binary | ios::out);
                        korisnik.read((char*)&knjiga, (sizeof(knjiga)));
                        korisnik.open("korisnik.bin", ios::binary | ios::in);
                        korisnik.read((char*)&kime, sizeof(kime));
                        korisnik >> kime;
                        korisnik.close();
                        cout << kime << " TRENUTNO IMA POSUDENU KNJIGU: " << knjiga << endl;
                        korisnik.close();
                        //knjiga = '\0';
                        sleep_for(seconds(2));
                        datoteka.close();
                    }
                    else if (PASSWORDP != PasswordP) {
                        cout << "KRIVI KORISNICKI PODATCI!" << endl;
                        pokusajP++;
                        cout << "\n";
                        cout << "BROJ POKUSAJA " << pokusajP << " OD MOGUCIH 3" << endl;
                        sleep_for(seconds(3));
                        datoteka.close();
                    }

                }
                cout << "RACUN JE BLOKIRAN!" << endl;
                sleep_for(seconds(2));
                datoteka.close();
                remove("profesor_prijava.bin");
                blokiran_racun();
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
            cout << "\nODABERITE RADNJU: ";
            cin >> izborK;
            //Options for libraryan
            //Sign up
            if (izborK == 1)
            {
                //prijava knjiznicara
                ifstream datoteka;
                datoteka.open("knjiznicar_prijava.bin");
                if (datoteka) {
                    cout << "DATOTEKA VEC POSTOJI" << endl;
                    cout << "\n";
                    cout << "VRACANJE NA PRIJAVU" << endl;
                    sleep_for(seconds(1));
                }
                else {
                    regk:
                    string KNJIZNICAR;
                    string PASSWORD;
                    cout << "\nUNESITE SVOJE KORISNICKO IME: ";
                    cin.ignore();
                    getline(cin, KNJIZNICAR);
                    cout << "\nUNESITE SVOJU SIFRU: ";
                    getline(cin, PASSWORD);
                    fstream datoteka("knjiznicar_prijava.bin", ios::binary | ios::app);
                    datoteka.write((char*)&PASSWORD, sizeof(PASSWORD));
                    datoteka.close();
                }
                //PASSWORD se sprema
                cout << "\n";
                cout << "REGISTRACIJA USPIJESNA"; // dodati zelenu boju
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
                    while (pokusaj < 3) {
                        system("cls");
                        cout << "\n ---------- PRIJAVA KNJIZNICARA ---------- ";
                        cout << "\n\n Upisite korisnicko ime: ";
                        cin.ignore();
                        getline(cin, knjiznicar);
                        cout << "\n Upisite lozinku:";
                        getline(cin, Password);
                        datoteka.open("knjiznicar_prijava.bin", ios::binary | ios::in);
                        datoteka.read((char*)&PASSWORD, sizeof(PASSWORD));
                        if (PASSWORD == Password) {
                            knjiz();
                            datoteka.close();
                        }
                        else if (PASSWORD != Password) {
                            cout << "KRIVI KORISNICKI PODATCI!" << endl;
                            pokusaj++;
                            cout << "\n";
                            cout << "BROJ POKUSAJA " << pokusaj << " OD MOGUCIH 3" << endl;
                            sleep_for(seconds(3));
                            datoteka.close();
                        }

                    }
                    cout << "RACUN JE BLOKIRAN!" << endl;
                    sleep_for(seconds(2));
                    datoteka.close();
                    remove("knjiznicar_prijava.bin");
                    blokiran_racun();
            }

        }

        //admin
        if (izbor == 4) {
            ifstream datoteka;
            datoteka.open("knjiznicar_prijava.bin");
            if (datoteka) {
                cout << "DATOTEKA VEC POSTOJI" << endl;
                cout << "\n";
                cout << "VRACANJE NA POCETNI ZASLON" << endl;
                sleep_for(seconds(1));
                goto pocetak;
            }
            else {
               
            }
        }

        //izlaz
        if (izbor == 5)
        {
            cout << "POZDRAV!" << endl;
            exit(5);
        }
    }
}