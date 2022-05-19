#include <iostream>

using namespace std;

class Obliczenia
{

public:

    virtual void Oblicz(string)=0;
    virtual void Show()=0;
};

class adresIP :public Obliczenia
{
    int okted[4];
    int ile_podsieci; //ile ma byc podsieci na tym adresie
    int ile_komputerow;

public:

    virtual void Oblicz(string);
    virtual void Show();

};
