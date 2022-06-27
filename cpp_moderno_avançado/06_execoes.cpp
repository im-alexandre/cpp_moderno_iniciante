#include <iostream>

void funcao ( int * ptr, int x ){
    if (ptr == NULL || x==0){
        throw ptr;
        //std::cout << "Erro bizarro!" << std::endl;
    }else{
        std::cout << "O ponteiro é: "<< *ptr << " e o número é "<< x << std::endl;
    }
}

int main (int argc, char *argv[])
{
    int num = 10;
    int * p = &num;

    try {
        funcao(p, num);
        funcao(nullptr, num);
        funcao(p, 0);
        funcao(NULL, num);
    } catch ( ... ){
        std::cout << "erro identificado" << std::endl;
    }

    return 0;
}
