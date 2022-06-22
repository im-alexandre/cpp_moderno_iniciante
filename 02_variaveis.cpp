#include <iostream>

int main (int argc, char *argv[])
{
    /* Definir é diferente de declarar;
     * definir é inicializar
     * declarar é atribuir valor
     */

    int signed x = -8; // Declarando a variável com sinal (negativa)
    int unsigned y = -8; // Unsigned com sinal retorna um valor errado
    char a = 'a';
    char b = 'Bb'; // O char é um caractere, só considerando o último
    float f = 87.5;

    // String deve conter aspas duplas e inicializar com o namespace std!!!
    //std::string palavra = "palavra"; 
    std::string palavra = {"palavra"}; // Inicialização uniforme
    int r, z; char letra; // Definindo várias variáveis
    std::cout << "o valor de x é: " << x << '\n';
    std::cout << "o valor de y é: " << y << '\n';
    std::cout << "o valor de a é: " << a << '\n';
    std::cout << "o valor de b é: " << b << '\n';
    std::cout << "o valor de f é: " << f << '\n';
    std::cout << "o valor de palavra é: " << palavra << '\n';
    return 0;
}
