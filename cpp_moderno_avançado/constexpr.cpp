#include <iostream>

//constexpr long int fib(int n){
long int fib(int n){
    return (n <= 1) ? n : fib(n-1) + fib(n-2);
}
/*
---- Com o constexpr
real    0m0,008s
user    0m0,003s
sys     0m0,004s

---- Sem o constexpr
real    0m0,012s
user    0m0,004s
sys     0m0,005s
*/

int main (int argc, char *argv[])
{
    std::cout << fib(30) << std::endl;
    return 0;
}
