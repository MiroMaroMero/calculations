#include <iostream>

using namespace std;

class Obliczenia
{

public:

    virtual void Oblicz(string)=0;
};

class adresIP :public Obliczenia
{
    string adress;
    string maska;
    string brama;
    string rozgloszeniowy;
    string sieci;
    int ile_podsieci; //ile ma byc podsieci na tym adresie
    int ile_komputerow;

public:

    virtual void Oblicz(string);
    //void decToBin();

};
