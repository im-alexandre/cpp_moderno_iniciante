#ifndef EXEMPLO_H
#define EXEMPLO_H
#include <iostream>

template<typename T>
class Exemplo{
    public:
        typedef std::string STR;
        Exemplo();
        Exemplo (T , T * );
        ~Exemplo();
        void lista_array( STR array[] );
        STR mostra( STR nova_senha );

    private:
        const double piquadrado = 3.14 * 3.14;

    protected: 
        STR senha = {"MinhaSenhaSecreta"};
};

#include "exemplo.cpp"
#endif // !DEBUG
