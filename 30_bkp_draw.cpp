#include <iostream>

int main( int argc , char **argv ){

    int max_i = 10, max_kj = 20;

    if( argc > 2 ){
        max_i = std::stoi( argv[1] );
        max_kj = std::stoi( argv[2] );
    } else if ( argc == 2 ){
        max_i = max_kj = std::stoi(argv[1]);
    }

    for( int i = 0; i <= max_i; i++ ){
        if( i == 0 || i == max_i )
        {
            if (i == 0)
            {
                std::cout << "\u250C";
            }else{
                std::cout << "\u2514";
            }
            for( int k = 0; k <= max_kj; k++ ){
                if( k == max_kj ){
                    if (i == 0)
                    {
                        std::cout << "\u2510";
                    }else{
                        std::cout << "\u2518";
                    }
                }else{
                    std::cout << "\u2500";
                }
            }
            std::cout << '\n';
        }else{
            std::cout << "\u2502";
            for( int j = 0; j <= max_kj; j++ ){
                if( j == max_kj ){
                    std::cout << "\u2502";
                }else{
                    std::cout << " ";
                }
            }
            std::cout << '\n';
        }
    }
    return 0;
}
