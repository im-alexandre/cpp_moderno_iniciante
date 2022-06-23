#include <iostream>

void funcao(){
    std::cout << "Função funcao do tipo void sem parametros" << '\n';
}

int funcao( int x, char caracter = 'x' ){
    // passando argumento opcional!
    std::cout << "O caractere é: " << caracter << '\n';
    return x;
}

std::string * funcao( std::string * nome1 ){
    return nome1;
}

const int funcao( const int x, const int y ){
    return x + y;
}

int main( int argc , char **argv ){
    funcao();
    std::cout << funcao( 6, 'M' ) << '\n';
    std::string nome {"Tim"};
    std::cout << *funcao( &nome ) << '\n';
    const int n1 {8};
    const int n2 {9};
    std::cout << "Função com constante: " << funcao( n1, n2 ) << '\n';
    return 0;
}

