#include <iostream>

void minha_func( int n ){
    int x = n + 1;
    if (x < 10)
    {
        std::cout << "O valor de n é: " << x << std::endl;
        minha_func(x);
    }
}

int main (int argc, char *argv[])
{
    minha_func(2);
    return 0;
}
