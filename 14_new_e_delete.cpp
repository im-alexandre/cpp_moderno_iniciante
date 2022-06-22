#include <iostream>

int main( int argc , char **argv ){
    std::string * ponteiro = nullptr; 
    ponteiro = new std::string[8];
    std::cout << "Digite algo: ";
    std::getline( std::cin, (*ponteiro) );
    std::cout << "Você digitou: \e[32;4m \u2189" << *ponteiro << "\e[m" << '\n';
    delete[] ponteiro;
    ponteiro = NULL;
    return 0;
}

