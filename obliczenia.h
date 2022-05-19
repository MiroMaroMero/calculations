#include <iostream>

using namespace std;

class Obliczenia
{

public:

    virtual void DecToBin(string)=0;
    //virtual void ShowBin()=0;
};

class ShowBin8v4 :public Obliczenia
{
    bool GOOD_ADDRESS;

    string t_okted[4];
    int binAdres[4][8];
    int okted[4];
    int ile_podsieci; //ile ma byc podsieci na tym adresie
    int ile_komputerow;

public:

    virtual void DecToBin(string);
    //virtual void ShowBin();

};
