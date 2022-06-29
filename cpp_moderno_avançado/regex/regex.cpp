#include <iostream>
#include <regex>
#include <string>


bool inicia_com_letra(std::string str){
    std::regex re("^[A-Z].*");
    std::smatch match;
    return std::regex_search(str, match, re);
}

int main (int argc, char *argv[])
{
    std::string teste = "Teste";
    if (inicia_com_letra(teste))
    {
        std::cout << "Inicia com letra" << std::endl;
    }
    return 0;
}
