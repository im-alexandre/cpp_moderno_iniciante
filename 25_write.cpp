#include <iostream>
#include <fstream>

int main( int argc , char **argv ){

  std::string conteudo, outro;

  std::ofstream arquivo;

  arquivo.open("arquivo.txt", std::ios_base::app);

  std::cout << "Informe uma linha: ";
  std::getline( std::cin, conteudo );
  std::cout << "Informe uma nova linha: ";
  std::getline( std::cin, outro );

  arquivo << conteudo << '\n';
  arquivo << outro << '\n';

  arquivo.close();

  std::cout << "Dados gravados com sucesso!" << '\n';
  return 0;
}


