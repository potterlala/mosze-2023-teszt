#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
   // NELEMENTS helyett N_ELEMENTS
    int *b = new int[NELEMENTS];

    // ; hiányzik, "" legyen szövegnél
    std::cout << '1-100 ertekek duplazasa'

    // 1-től kezdődik: i = 1
    // for ciklus többi része? (i <= N_ELEMENTS; i++)
    for (int i = 0;)

    {
        b[i] = i * 2;
    }

    // i < N_ELEMENTS középen
    for (int i = 0; i; i++)
    {
      // érték kiírása? (b[i])
        std::cout << "Ertek:"
    }    

    std::cout << "Atlag szamitasa: " << std::endl;
    // atlag = 0, különben a += nem működik
    // átlag legyen double, hátha tizedes érték lesz!
    int atlag;

    // ; !! (nem vessző!)
    for (int i = 0; i < N_ELEMENTS, i++)
    {
      // ; végére!
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    // delete hiányzik
    return 0;
}
