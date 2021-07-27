#include <iostream>
#include "Cards.h"

int main()
{
    for (int i = 0; i <= 12; i++) {
        for (int n = 0; n < 4; n++) {
            std::cout << cardNames[cardNumbers[i]] << " of " << cardSymbols[n] <<std::endl;
        }
    }
}


