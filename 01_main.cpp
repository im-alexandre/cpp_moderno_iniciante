#include <iostream>

int main (int argc, char *argv[])
{
    std::cout << "Quantidade de parametros passados = " << argc << std::endl;
    std::cout << "O primeiro argumento é: " << argv[0] << std::endl;
    return 0;
}
