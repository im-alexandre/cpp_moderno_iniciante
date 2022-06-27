#include <iostream>

class Hello {
    public:
        void helloworld(){
            std::cout << "Olá mundo!!!" << std::endl;
        }
};

int main (int argc, char *argv[])
{
    Hello hello;
    hello.helloworld();
    return 0;
}
