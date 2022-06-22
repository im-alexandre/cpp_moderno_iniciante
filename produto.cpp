#include <iostream>

// Prototipando funções (ajuda no tamanho e performance)
//int produto( int valor1, int valor2 );
int produto(int, int); // Podemos passar apenas o tipo dos argumentos

int main(){
    std::cout << "O valor de 33 * 6 é: " << produto(33, 6) << '\n';
}

int produto( int valor1, int valor2 ){
    return valor1 * valor2;
}
