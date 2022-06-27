#include <iostream> 

template <class T>
class Stack{
    public:
        void pilha( T array, int max ){
            int i = {0};

            while( i < max ){
                std::cout << "Os elementos do array são: "<< array[i] << std::endl;
                i++;
            }
        }
};


int main (int argc, char *argv[])
{
    Stack<const std::string*> s;
    std::string marray[] = {"Algo", "Bola", "Carro"};
    int len = sizeof(marray) / sizeof(marray[0]);
    //char * pmarray = marray;
    s.pilha(marray, len);
    return 0;
}
