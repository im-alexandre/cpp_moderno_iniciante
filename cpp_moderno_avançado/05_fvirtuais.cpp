#include <iostream>

class Mae {
    public:
        // A função mensagem pode ser sobrescrita, porém, ao utilizar ponteiros,
        // o C++ busca o membro da classe mãe. A palavra reservada "virtual"
        // ajuda a manter a consistencia do comportamento mesmo quando utilizamos
        // ponteiros
        virtual void mensagem(){
            std::cout << "Eu sou a mãe!" << std::endl;
        }
};

class Filha : public Mae {
    public:
        void mensagem(){
            std::cout << "Eu sou a filha!!! " << std::endl;
        }
};

class Neta : public Filha {
    public:
        void mensagem(){
            std::cout << "Eu sou a Neta!!! " << std::endl;
        }
};

void responde ( Mae * m ){
    m->mensagem();
}

int main (int argc, char *argv[])
{
    Mae m;
    Filha f;
    Neta n;

    m.mensagem();
    f.mensagem();
    n.mensagem();

    std::cout << "\n--------------------\n" << std::endl;

    responde( &m );
    responde( &f );
    responde( &n );
    return 0;
}
