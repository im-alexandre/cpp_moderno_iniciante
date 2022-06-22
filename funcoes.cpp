#include <iostream>
using namespace std;

int soma(int x, int y){
    //cout << "O valor de x + y é: " << x + y << '\n';
    return x + y;
}

int main (int argc, char *argv[])
{
    //int x = 3, y = 6;
    //soma(x, y);
    cout << "O valor de x + y é: " << soma(3, 5) << '\n';
    return 0;
}
