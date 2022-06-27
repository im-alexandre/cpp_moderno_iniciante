#ifndef ROOT_H
#define ROOT_H
#include <iostream>
namespace root{
    class Terminal{
        public:
            void terminal(){
                std::cout << "Minha função membro número 1 " << std::endl;
            }

            void root(){
                std::cout << "Minha função membro número 2 " << std::endl;
            }
    };
}
#endif // 
