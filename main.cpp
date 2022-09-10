#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];   //hibás megnevezés
    std::cout << '1-100 ertekek duplazasa'   //stringeket ""-el kell megadni (esetleg endl a végére)
    for (int i = 0;)   //hiányos feltétel
    {
        b[i] = i * 2;   //értékek kiírattatása lehet ebbe a ciklusba
    }
    for (int i = 0; i; i++)   //felesleges for ciklus
    {
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)   //hibás feltétel
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
