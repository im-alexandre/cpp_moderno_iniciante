#include <iostream>

enum Cores {
  red,
  green = 84,
  yellow
};

enum Saidas {
  sucesso,
  erro_ao_abrir,
  erro_de_leitura,
  erro_de_permissao
};

void mostra( Cores type ){
  std::cout << "A cor do Amarelo é: " << yellow << '\n';

}


int main( int argc , char **argv ){
  Cores cores;
  Saidas s;
  mostra( cores );
  return sucesso;
}

