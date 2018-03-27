#include <iostream>
#include <string>
using namespace std;

class Tekst
{
    protected:
        string xyz;

    public:
        Tekst(){}

        virtual string Pokaz()
        {
            return xyz;
        }
};

/* abstrakcyjny dekorator */
class Dekorator : public Tekst
{
    public:
        virtual string Pokaz()
        {
            return "dek";
        }
};

class baza : public Tekst
{

    public: baza():Tekst()
    {
        xyz = "baza";
    }
};

class dec1X : public Dekorator
{
    Tekst *wsk;

    public: dec1X(Tekst *xyz):Dekorator()
    {
        wsk = xyz;
    }

    string Pokaz()
    {
        return "XXX " + wsk->Pokaz() + " XXX";
    }
};

class dec2znaczki : public Dekorator
{
    Tekst *wsk;

    public: dec2znaczki(Tekst *xyz):Dekorator()
    {
        wsk = xyz;
    }

    string Pokaz()
    {
        return "@_@ " + wsk->Pokaz() + " @_@";
    }
};


int main()
{
    Tekst *pierwszy = new dec2znaczki(new dec1X(new dec1X(new dec1X(new baza))));
    cout << pierwszy->Pokaz() << endl;

    return 0;
}
