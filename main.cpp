#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];
    std::cout << "1-100 ertekek duplazasa\n";

    for (int i = 1; i <= N_ELEMENTS; i++)
    {
        b[i-1] = i * 2;
    }

    for (int i = 0; i < N_ELEMENTS; i++)
    {
        // std::cout << "Ertek: "
        std::cout << b[i] << std::endl;
    }    

    std::cout << "\nAtlag szamitasa:\n"; // << std::endl;
    double atlag = 0;

    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    delete[] b;
    return 0;
}
