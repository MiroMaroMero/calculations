#include <iostream>
#include "obliczenia.h"

using namespace std;

int main()
{
    adresIP ip;

    Obliczenia *wsk;
    wsk = &ip;
    wsk->Oblicz("23.23.11.233");

    return 0;
}
