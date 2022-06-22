#include <iostream>

void loop_while( int );
void loop_for( int );

int main(){
    loop_for( 15 );
    loop_while( 10 );
    return 0;
}

void loop_for( int n ){
    std::cout << "Utilizando loop for (n = " << n << "): " << std::endl;
    for( int i = 0; i < n; i++ ){

        for( int k = 0; k < i + 1; k++ ){
            std::cout << "*";
        }

        for( int j = 15; j > 0; j-- ){
            std::cout << " ";
        }

        std::cout << '\n';
    }
}

void loop_while( int n ){
    std::cout << "Utilizando loop while (n = " << n << "): " << std::endl;
    int i = 0, j = 0;
    while ( i <= n ){
        while ( j <= i ){
            std::cout << "*";
            j++;
        }
        j = 0;
        i++;
        std::cout << '\n';
    }
}
