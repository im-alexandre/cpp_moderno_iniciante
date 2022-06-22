#include <iostream>

void recebe_char();
void recebe_char_array();
void recebe_string();

int main(){
    recebe_char();
    recebe_char_array();
    recebe_string();
    return 0;
}

void recebe_char(){
    char letra {};
    std::cout << "Informe uma letra: ";
    std::cin.get(letra);
    std::cout << "A letra informada foi: "<< letra << std::endl;
}

void recebe_char_array(){
    const int total {99};
    char letra[total];
    std::cout << "Digite uma palavra (até 99 caracteres): ";
    std::cin >> letra;
    std::cin.end;
    std::cout << "A letra que você digitou foi: " << letra << std::endl;
}

void recebe_string(){
    // Não abre a entrada para digitação
    std::string palavra {}; 
    std::cout << "Digite uma palavra: ";
    std::getline( std::cin , palavra );
    std::cout << "A letra que você digitou foi: " << palavra << '\n';
}
