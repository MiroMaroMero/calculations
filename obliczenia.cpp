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
                t_okted[i]=kopia;
                okted[i]=atoi(kopia.c_str());
            }
            else
            {
                t_okted[i]=kopia;
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

        for(int e=0;e<3;e++)
        {
            cout << "Liczba przed: " << liczba << endl;
            cout << "Reszta: " << liczba%2 << endl;
            liczba = liczba/2;
            cout << "Po podzieleniu: " << liczba << endl;
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
