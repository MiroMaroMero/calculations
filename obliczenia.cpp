#include <iostream>
#include "obliczenia.h"
#include <string>
#include <cstdlib>
#include <windows.h>

using namespace std;

void adresIP::Oblicz(string adres)
{
    string kopia;

    kopia=adres;

    size_t pozycja=adres.find('.');

    if(pozycja!=string::npos)
    {
        for(int i=0;i<=3;i++)
        {
            size_t pozycja=adres.find('.');

            if(i==3)
            {
                okted[i]=atoi(kopia.c_str());
            }
            else
            {
                okted[i]=atoi((kopia.substr(0,pozycja)).c_str());
                kopia.erase(0,pozycja+1);
            }
        }
    }
    else
    {
        cout << "Nie prawidlowy adres!" << endl;
    }

    //Zamiana na binarny



    for(int i=0;i<=3;i++)
    {
        int liczba = okted[i];

        while(liczba%2!=0)
        {
           cout << liczba%2 << endl;
            liczba = liczba/2;
            cout << liczba << endl;
        }

    }
}

void adresIP::Show()
{
    for(int i=0;i<=3;i++)
    {
        cout << okted[i] << endl;
    }
}
