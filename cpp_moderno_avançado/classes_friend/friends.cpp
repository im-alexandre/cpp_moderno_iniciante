#include <iostream>

class Casa{
    public:
        std::string comp = "44555";

    protected:
        char essid[5] = {'H', 'o', 'm', 'e', '\0'};

    private:
        std::string password = "abc" + comp;

    friend class Vizinho;
};

