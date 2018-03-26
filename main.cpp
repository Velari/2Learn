#include <iostream>
#include <string>
#include <stddef.h>

using namespace std;

class Lista
{
    private:
        static Lista* insta;

        int dane;
        Lista* nast;

        Lista(){}

    public:

        static Lista* getInstance()
        {
            if (insta == NULL)
            {
                insta = new Lista();
            }
            return insta;
        }

        void Wstaw(int x, int i, Lista* l)
        {
            if (i==1)
            {
                Lista* nowy = new Lista();
                nowy->dane = x;
                nowy->nast = l;
                l = nowy;
            }
            else if (i>1)
            {
                Lista* nowy = new Lista;
                nowy->dane = x;

                Lista* poprz = getInstance();
                int licznik = 0;

                while(licznik != (i-2) )
                {
                    licznik++;
                    poprz = poprz->nast;
                }
                nowy->nast = poprz->nast;
                poprz->nast = nowy;
                return;
            }
            else
            {
                cout << "Bledne Dane." << endl;
            }
            return;
        }

        void Pokaz(Lista* l)
        {
            if (l == NULL)
            {
                cout << "Pusta Lista" << endl;
            }
            else             {
                while( l != NULL)
                {
                    cout << l->dane << endl;
                    l = l->nast;
                }
            }
            return;
        }
};

Lista *Lista::insta = NULL;

int main()
{
    Lista *pierwsza = Lista::getInstance();
    pierwsza->Pokaz(pierwsza);
    /*pierwsza->Wstaw(5,1);
    pierwsza->Pokaz();
    pierwsza->Wstaw(4,2);
    pierwsza->Pokaz();
    pierwsza->Wstaw(3,3);
    pierwsza->Pokaz();*/
    return 0;
}
