#include <iostream>

// Definindo constante como macro
#define PI 3.14

int main ()
{
    // Definindo constante à moda C++
    const float pi = 6.28;
    //float pi = 3.14; vai dar erro!
    //double PI = 30; Outro erro
    std::cout << "O valor de PI: " << PI << '\n';
    std::cout << "O valor de pi: " << pi << '\n';
    return 0;
}
