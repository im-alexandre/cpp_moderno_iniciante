#include <iostream>
using namespace std;

int main(){
    int var {};

    cout << "Digite um número: ";
    cin >> var;

    if( var == 8 ){
        cout << "O valor de var é OITO " << '\n';
    }else if( var == 10 ){
        cout << "O valor de var é DEZ: " << '\n';
    }else if( var == 20 ){
        cout << "O valor de var é VINTE: " << '\n';
    }else{
        cout << "var é DIFERENTE de 10 e de 8, var na verdade é: " << var << '\n';
    }


    switch( var ){
        case 1 ... 8:
            cout << "Está entre 1 e 8" << '\n';
            break;
        case 10 ... 20:
            cout << "Está entre 10 e 20" << '\n';
            break;
        case 21 ... 30:
            cout << "Está entre 21 e 30" << '\n';
            break;
        default:
            cout << "Não está entre nenhuma das ranges informada. " << var << '\n';
            break;
    }

    // ##### Operador ternário #####
    var == 8 ? cout << "A variável var é OITO" << '\n' : cout << "Não é OITO" << '\n';
    cout << ( var == 8 ? "A variável var é OITO(like a boss)" : "Não é OITO(like a boss)" ) << '\n';

    return 0;
}
