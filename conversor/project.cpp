#include "project.h"

void _help(){
    std::cout << "Uso: ./a.out [--parametros] [numero]\n"
                 " --dec Para converter decimal para binário \n"
                 " --bin Para converter binário para decimal \n";
}

void _start(int argc, char ** argv ){
    if(argc > 2){
        std::string param = argv[1];
        int number = atoi(argv[2]);
    }else{
        _help();
    }
}
