#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];
    std::cout << "1-100 ertekek duplazasa:\n";

    double atlag = 0;

    for (int i = 1; i <= N_ELEMENTS; i++)
    {
        b[i-1] = i * 2;
        std::cout << b[i-1] << std::endl;
        atlag += b[i-1];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    std::cout <<"valami";

    delete[] b;
    return 0;
}
