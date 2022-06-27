#include <iostream>
#include "exemplo.hh"

int main (int argc, char *argv[])
{
    int a = 30;
    Exemplo<int>(a, &a);
    Exemplo<STR> exemplo;
    
    return 0;
}
