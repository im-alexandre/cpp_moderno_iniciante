#include <iostream>

// Definindo constante como macro
#define PI 3.14

int main ()
{
    // Definindo constante à moda C++
    const float pi = 6.28;
    //pi = 3.14; vai dar erro!
    PI = 30;
    std::cout << "O valor de PI: " << PI << '\n';
    std::cout << "O valor de pi: " << pi << '\n';
    return 0;
}
