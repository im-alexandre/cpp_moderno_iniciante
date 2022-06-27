#include <iostream>

class Pessoa {
    public:
        void nome(){
            std::cout << "Alexandre Castro" << std::endl;
        }
};

class Habilidades : public Pessoa {
    public:
        void idioma() {
            std::cout << "Português Brasileiro" << std::endl;
        }
};  

class Bicho{
    public:
        void especie(){
            std::cout << "Especie do bicho" << std::endl;
        }
};

// Herança múltipla
class Dados : public Habilidades, public Bicho {

};

int main (int argc, char *argv[])
{
    Dados dados;
    std::cout << "O nome dele é: " << std::endl;
    dados.nome();
    dados.idioma();
    dados.especie();
    return 0;
}
