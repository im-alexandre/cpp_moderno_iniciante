#include <iostream>
using namespace std;

class Pessoa {
    public:
        Pessoa( string nome, string sobrenome ){
            std::cout << nome << std::endl;
            std::cout << sobrenome << std::endl;
           
        }

        // Sobrecarregando o construtor
        Pessoa(int x, int y){
            std::cout << "x*y = "<< x*y << std::endl;
        }

        ~Pessoa(){
            std::cout << "Fechando o escopo" << std::endl;
        }
};

int main (int argc, char *argv[])
{
    //Pessoa teste = Pessoa("Alexandre", "Castro");
    //Pessoa("Alexandre", "Castro");
    Pessoa(5, 10);
    return 0;
}
