#include <iostream>

void increment_print(){
    static int value {1};
    ++value;
    std::cout << value << std::endl;
}

int main (int argc, char *argv[])
{
    for (int i = 0; i < 5; i++) {
        increment_print();
    }
    return 0;
}
