#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];   //hibás megnevezés
    std::cout << "1-100 ertekek duplazasa" << std::endl;   //stringeket ""-el kell megadni (esetleg endl a végére)
    for (int i = 1; i <= N_ELEMENTS; i++)   //hiányos feltétel
    {
        b[i] = i * 2;
        std::cout << "Ertek: " << b[i] << std::endl;   //értékek kiírattatása lehet ebbe a ciklusba
    }
    
    //felesleges for ciklus
    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 1; i <= N_ELEMENTS; i++)   //hibás feltétel
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
