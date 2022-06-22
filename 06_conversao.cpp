#include <iostream>

void conversao_implicita();
void conversao_explicita();

int main (int argc, char *argv[])
{
    std::cout << "Conversões implícitas: \n";
    conversao_implicita();
    std::cout << "\n\nConversões explícitas: \n";
    conversao_explicita();
    return 0;
}

void conversao_implicita(){
    double valor = 3.14;
    int numero = valor;

    std::cout << "O valor de 'valor' é: " << valor << '\n';
    std::cout << "O valor de 'numero' é: " << numero << '\n';

    char letra = 'c';
    numero = letra;
    std::cout << "O valor de 'numero' é: " << numero << '\n';
    numero = numero + letra;
    std::cout << "O valor de 'numero' é: " << numero << '\n';

    std::string palavra = "Algo";
    palavra = numero;
    // Haverá perda. a variável vai ficar vazia
    std::cout << "O valor de 'palavra' é: " << palavra << '\n';

    /*
     * Haverá erro!
     * numero = palavra;
     * std::cout << "O valor de 'numero' é: " << numero << '\n';
     */
}

void conversao_explicita(){
    int i, j;
    double d = 1.98;
    i = (int) j; // notação "cast"
    j = int(d);
    // utilização do static_cast (muito utilizado)

    double pi = 3.14;
    int number = static_cast<int>( pi );
    pi = static_cast<double>(number);
    std::cout << "O valor de 'number' é: " << number << '\n';
    std::cout << "O valor de 'pi' é: " << pi << '\n';

    double y = 3.14;
    const int xpto = static_cast<double&>(y);
}
