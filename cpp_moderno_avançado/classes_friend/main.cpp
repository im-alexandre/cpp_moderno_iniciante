#include <iostream>
#include "friends.cpp"
class Vizinho{
    public:
        void controller(){
            Casa c;
            std::cout << "Olá, vizinho, a REDE é: " << c.essid << std::endl;
            std::cout << "E a senha é: " << c.password << std::endl;
        }
};


int main (int argc, char *argv[])
{
    Vizinho v;
    v.controller();
    return 0;
}
