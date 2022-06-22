/* As bibliotecas do C podem ser utilizadas no C++, basta importar com o ".h"
 * no final ou utilizando um "c" na frente, ex: 
 * #include <stdio.h>
 * #include <cstdio>
 * As libs padrão ficam em /usr/include
 */

#include <iostream>
#include "quadrado.h"
//#include "libs/produto.h"

int main (int argc, char *argv[])
{
    std::cout << "O resultado de 5 * 6 é: " << produto(5, 6) << '\n';
    return 0;
}
