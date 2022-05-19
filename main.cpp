#include <iostream>
#include "obliczenia.h"

using namespace std;

int main()
{
    ShowBin8v4 ip;

    Obliczenia *wsk;
    wsk = &ip;
    wsk->DecToBin("121.23.11.233");
    //wsk->ShowIPBin();

    return 0;
}
