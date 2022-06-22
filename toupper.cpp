#include <iostream>

int main ()
{
    char caracter = 'a';
    std::cout << "O valor de a é: " << caracter << '\n';
    std::cout << "O valor MAIÚSCULO de a é: " << (char) toupper(caracter) << '\n';

    // Ele copiou o resultado de toupper (65) e converteu para char
    caracter = toupper( caracter );
    std::cout << "O valor MAIÚSCULO de a é: " << caracter << '\n';
    return 0;
}
