#include "exemplo.hh"

typedef std::string STR;

template<typename T>
Exemplo<T>::Exemplo(){
    std::cout << "Iniciando nosso exemplo!" << std::endl;
}

template<typename T>
Exemplo<T>::Exemplo (T x, T * y) {
    std::cout << "A soma de "<< x << " mais "<< *y << " é igual a "<< x + (*y) << std::endl;
}

template<typename T>
Exemplo<T>::~Exemplo(){
    std::cout << "Fechando o projeto" << std::endl;
}

void lista_array( STR array[] ){
    std::cout << "Ainda sendo implementada" << std::endl;
}

template<typename T>
STR Exemplo<T>::mostra( STR nova_senha ){
    STR senha = nova_senha;
    return senha;
}
