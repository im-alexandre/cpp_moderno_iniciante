#include <iostream>

class Pessoa {
    private:
        int idade = 27;
    protected:
        double altura = 1.85;
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

        // idade é um membro privado, não pode ser utilizado em classes filhas
        //void display_idade() {
            //std::cout << idade << std::endl;
        //}
        void display_altura() {
            std::cout << altura << std::endl;
        }
};  

int main (int argc, char *argv[])
{
    Habilidades hab;
    std::cout << "O nome dele é: " << std::endl;
    hab.display_altura();
    //std::cout << hab.idade << std::endl;
    hab.nome();
    hab.idioma();
    return 0;
}
