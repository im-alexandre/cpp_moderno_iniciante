#include <iostream>
#include <cstdlib>

int main( int argc , char **argv ){

  std::string home = getenv("HOME");
  std::string wm = getenv("XDG_SESSION_DESKTOP");

  std::cout << "O caminho da sua $HOME é: " << home << '\n';
  std::cout << "O seu $SHELL padrão é: " << getenv("SHELL") << '\n';
  std::cout << "Seu Gerenciador de Janelas é: " << wm << '\n';
  std::cout << "Seu Editor de texto padrão é: " << getenv("EDITOR") << '\n';

  //std::cout << "Lista dos seus arquivos onde você está é:" << system("ls") << '\n';
  std::cout << "Aista dos arquivos onde você está é: \n";
  system("ls");

  return 0;
}

