#include <iostream>
#include <vector>
using namespace std;

// BAZA
class BAZA
{
    public:
        virtual void Dodaj(){}
        virtual void Odejmij(){}
        virtual void Wyzeruj(){}
        virtual void Pokaz(){}
        int liczba=0;
};

// LISC
class Lisc : public BAZA
{
    public:
        void Dodaj(int i)
        {
            liczba = liczba + i;
            cout << "dodano liczbe" << endl;
        }
        void Odejmij(int i)
        {
            liczba = liczba - i;
            cout << "odjeto liczbe" << endl;
        }
        void Wyzeruj()
        {
            liczba = 0;
            cout << "wyzerowano liczbe" << endl;
        }
        void Pokaz()
        {
            cout << liczba << endl;
        }
};

// WEZEL - KOMPOZYT
class Kompozyt : public BAZA
{
    vector<BAZA> Wektorek;
    int licznikElementow=0;

    public:
        void Dolacz(Lisc x)
        {
            Wektorek.push_back(x);
            licznikElementow++;
        }

        void DodajDoKopii(int nrKopii,int x)
        {
            Wektorek[nrKopii].liczba += x;
            cout << "Dodano do Kopii" << endl;
        }
        void PokazKopie()
        {
            cout << "Przechowywane kopie liczb:" << endl;

            for (int i=0; i<Wektorek.size();i++)
            {
                cout << Wektorek[i].liczba << endl;
            }
        }
};

int main()
{
    Lisc a;
    Lisc b;
    Kompozyt c;

    cout<<"Dla a:"<<endl;
    a.Pokaz();
    a.Dodaj(5);
    a.Pokaz();
    cout<<endl;

    cout<<"Dla b:"<<endl;
    b.Pokaz();
    b.Dodaj(3);
    b.Pokaz();
    cout<<endl;

    c.Dolacz(a);
    c.Dolacz(b);

    c.PokazKopie();
    cout<<endl;
    c.DodajDoKopii(0,5);
    cout<<endl;
    c.PokazKopie();
    cout<<endl;

    cout<<"Dla a ";
    a.Pokaz();
    cout<<"Dla b ";
    b.Pokaz();

    return 0;
}
