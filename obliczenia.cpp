#include <iostream>
#include "obliczenia.h"
#include <string>
#include <cstdlib>
#include <windows.h>

using namespace std;

void ShowBin8v4::DecToBin(string adres)
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

        for(int e=7;e>=0;e--)
        {
            //cout << "Liczba przed: " << liczba << endl;
            //cout << "Reszta: " << liczba%2 << endl;
            //cout << liczba%2;
            binAdres[i][e] = liczba%2;
            //cout << binAdres[i][e];
            liczba = liczba/2;
            //cout << "Po podzieleniu: " << liczba << endl;
        }

        //cout << ".";
    }

    //cout << endl;
}
/*
void ShowBin8v4::ShowIPBin()
{
    for(int i=0;i<4;i++)
    {
        for(int e=0;e<8;e++)
        {
            cout << binAdres[i][e];
        }

        if(i<3) cout << ".";
    }

}
*/
