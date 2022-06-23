#include <iostream>
#include <fstream>

int main( int argc , char **argv ){

  std::string linha;
  bool numero {false};
  std::string param;
  int i = {1};

  if( argc > 1 ){
    param = argv[1];
    if( param == "--numero" || param == "-n" ){
      numero = true;
    }
  }

  std::ifstream arquivo("arquivo.txt");

  if( arquivo.is_open() ){

    while( getline( arquivo , linha ) ){
      if( numero ){
        std::cout << i << " \u2502 " << linha << '\n';
        i++;
      }else{
        std::cout << linha << '\n';
      }
    }

    arquivo.close();

  }else{
    std::cout << "Não foi possível abrir o arquivo." << '\n';
  }

  return 0;
}

