#include <iostream>
#include <string>

char WczytajZnak()
{
    std::string letter;
    std::cin >> letter;

    while (letter.length() != 1)
    {
        std::cout << std::endl << "Type a single letter and press <enter>: ";
        std::cin >> letter;
    }

    for (auto& c : letter)
        c = toupper(c);

    return letter[0];
}
