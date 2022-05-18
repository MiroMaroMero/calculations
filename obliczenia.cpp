#include <iostream>
#include "obliczenia.h"
#include <string>

using namespace std;

void adresIP::Oblicz(string adres)
{
    string okted[4];
    string kopia;

    kopia=adres;

    size_t pozycja=adres.find('.');

    if(pozycja!=string::npos)
    {
        cout << "Adres przed modyfikacja: " << adres << endl;
        cout << "Kropka na pozycji: " << pozycja << endl;

        for(int i=0;i<=3;i++)
        {
            size_t pozycja=adres.find('.');

            if(i==3)
            {
                okted[i]=kopia;
            }
            else
            {
                okted[i]=kopia.substr(0,pozycja);
                kopia.erase(0,pozycja+1);
            }

            cout << "Aktulany adres: " << kopia << endl;
            cout << "lugosc do kropki: " << pozycja << endl;
        }

        for(int i=0;i<=3;i++)
        {
            cout << okted[i];
            if(i<3) cout << ".";
        }

        cout << endl;

    }
    else
    {

    }

    //cout << pozycja << endl;
}
