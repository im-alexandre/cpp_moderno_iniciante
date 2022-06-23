#include <iostream>
#include <cstdlib>

int fatorial( int numero ){
  return (numero <= 1) ? 1 : numero * fatorial( numero - 1 );
}

int fibonacci( int numero ){
  return ( numero <= 1 ) ? 1 : fibonacci( numero - 1 ) + fibonacci( numero - 2 );
}

int main( int argc , char **argv ){
  if( argc > 1 ){
      int numero = atoi( argv[1] );
      std::cout << "O fatorial de " << numero << "! é " << fatorial( numero ) << '\n';
      std::cout << "\nA sequência de Fibonacci do número " << numero << " é: ";
      int i = 0;
      while( i < numero ){
        std::cout << " " << fibonacci( i );
        i++;
      }
      std::cout << '\n';
    }else{
    std::cout << "Informe um número." << '\n';
  }
  return 0;
}

