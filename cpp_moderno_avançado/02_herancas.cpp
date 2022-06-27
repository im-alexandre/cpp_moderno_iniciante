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

int main (int argc, char *argv[])
{
    Habilidades hab;
    std::cout << "O nome dele é: " << std::endl;
    hab.nome();
    hab.idioma();
    return 0;
}
