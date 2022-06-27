#include <iostream>

int main (int argc, char *argv[])
{
    std::string frase = {"A versão do C++ é: "};
    std::cout << frase << __cplusplus << std::endl;
    return 0;
}
