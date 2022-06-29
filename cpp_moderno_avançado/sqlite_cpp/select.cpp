#include <sqlite3.h>
#include <iostream>

static int callback( void*, int, char**, char** );

int main (int argc, char *argv[])
{
    sqlite3 * DB;
    bool connect = sqlite3_open("banco_dados.db", &DB);
    std::string data("CALLBACK FUNCTION");
    std::string sql("SELECT * FROM dados");
    
    if (connect)
    {
        std::cerr << "Erro: " << sqlite3_errmsg(DB);
        return 1;
    }

    int rc = sqlite3_exec(DB, sql.c_str(), callback, (void*)data.c_str(), NULL);

    if (rc != SQLITE_OK ){
        std::cerr << "Erro ao selecionar os dados!" << '\n';
    }

    sqlite3_close(DB);

    return 0;
}

static int callback( void* data, int argc, char** argv, char** az_col_name ){
    for (int i = 0; i < argc; i++) {
        std::cout << argv[i] << " ";
    }
    std::cout << '\n';
    return 0;
}
