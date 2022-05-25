#include <iostream>
#include <string>
//przykład działania - uzupełniania tablicy tekstowej (char*)
// 1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20
//[6][:][0][0][-][1][4][:][0][0][\0] [] [] [] [] [] [] [] [] []
//REALNE INDEKSY TABLICY:
// 0  1  2  3  (...)                                         19

using namespace std;

#define MAX_SIZE 20

int main()
{
    string imie[MAX_SIZE];
    string nazwisko[MAX_SIZE];
    string mail[MAX_SIZE];
    int wiek[MAX_SIZE];
    string godz_pracy[MAX_SIZE];

    //OPERATORY SKRÓTOWE
    int a,b,c,d,e,f,g,h;
    a=b=c=d=e=f=g=h=1;

    a+=12; // a = a + 12;
    b-=14; // b = b - 14;
    c*=3;  // c = c * 3;
    d/=4;  // d = d / 4;
    e%=5;  // e = e % 5;

    f|=4;  // f = f | 4;
    g&=3;  // g = g & 3;
    h^=7;  // h = h ^ 7;

    //OPERATORY INKREMENTACJI/DEKREMENTACJI
    int x,z;
    x=z=0;

    cout << "INKREMENTACJA/DEKREMENTACJA" << endl;
    //z++;
    cout << z++ << endl;
    //++z;
    cout << ++z << endl;
    //x--;
    cout << x-- << endl;
   // --x;
    cout << --x << endl;
    cout << "INKREMENTACJA/DEKREMENTACJA" << endl;

    for(int i=0;i<MAX_SIZE;i++) {
        cout << "Podaj imię: ";
        getline(cin, imie[i]);
        cout << "Podaj nazwisko: ";
        getline(cin, nazwisko[i]);
        //cout << "Podaj swój wiek: ";
        // cin >> wiek[i];
        cout << "Podaj swój adres e-mail: ";
        getline(cin, mail[i]);
        cout << "Podaj czas, w którym pracujes: ";
        getline(cin, godz_pracy[i]);
    }
                            //i+=1
    for (int i=0;i<MAX_SIZE;i=i+1) {
        cout << "Dane osoby " << i+1 << endl << "Imię i nazwisko " << imie[i] << " " << nazwisko[i] <<
            ", Twój wiek to " << wiek[i] << " lat, twój adres e-mail " << mail[i] << ", pracujesz w godzinach " << godz_pracy[i] << endl;
    }

//    cout << "Przedstaw się; podaj imię: ";
//    getline(cin, imie[0]);
//    //cin >> imie;

//    cout << "Podaj nazwisko: ";
//    getline(cin, nazwisko[0]);

//    //cout << "Podaj swój wiek: ";

//   // cin >> wiek[0];
//    //cout << '\0';

//    cout << "Podaj swój adres e-mail: ";
//    getline(cin, mail[0]);
//    //cin >> mail[0];
//    cout << "Podaj czas, w którym pracujes: ";
//    getline(cin, godz_pracy[0]);
//    //cin >> godz_pracy;
//    cout << "Kolejna osoba..." << endl;
//    cout << "Podaj imię: ";
////    cout << "Przedstaw się; podaj imię:  ";
//    getline(cin, imie[1]);
//    //cin >> imie;

//    cout << "Podaj nazwisko: ";
//    getline(cin, nazwisko[1]);

//    //cout << "Podaj swój wiek: ";
//    //cin >> wiek[1];
//    cout << "Podaj swój adres e-mail: ";
//    getline(cin, mail[1]);
//    //cin >> mail[1];
//    cout << "Podaj czas, w którym pracujes: ";
//    getline(cin, godz_pracy[1]);
//    //cin >> godz_pracy;

//    cout << "Witaj! Nazywasz się " << imie[0] << " " << nazwisko[0] <<
//            ", Twój wiek to " << wiek[0] << " lat, twój adres e-mail " << mail[0] << ", pracujesz w godzinach " << godz_pracy[0] << endl;
//    cout << "Witaj! Nazywasz się " << imie[1] << " " << nazwisko[1] <<
//            ", Twój wiek to " << wiek[1] << " lat, twój adres e-mail " << mail[1] << ", pracujesz w godzinach " << godz_pracy[1] << endl;
    return 0;
}
