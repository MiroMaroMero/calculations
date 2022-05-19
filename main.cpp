#include <iostream>
#include "obliczenia.h"

using namespace std;

int main()
{
    adresIP ip;

    Obliczenia *wsk;
    wsk = &ip;
    wsk->Oblicz("121.23.11.233");
    wsk->Show();

    return 0;
}
