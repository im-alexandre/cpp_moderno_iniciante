#include <cstdlib>
#include <iostream>

#include <mysql_connection.h>
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

typedef sql::Connection * CONN;
typedef std::string STR;

CONN conecta( sql::Driver * driver, STR endereco, STR user, STR pass, STR schema );

int main (int argc, char *argv[])
{
    STR endereco = "tcp://127.0.0.1:3306";
    STR user = "root";
    STR pass = "root";
    STR schema = "cpp";

    try
    {
        sql::Driver *driver;
        CONN con = conecta( driver, endereco, user, pass, schema);
        std::cout << "Conectado com sucesso!!!" << std::endl;

        delete con;

    }
    catch (sql::SQLException &e)
    {
        std::cout << "# ERR: SQLException in " << __FILE__;
        std::cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
        std::cout << "# ERR: " << e.what();
        std::cout << " (MySQL error code: " << e.getErrorCode();
        std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
    }
    return 0;
}

CONN conecta( sql::Driver * driver, STR endereco, STR user, STR pass, STR schema ){
        sql::Connection *con;

        /* Create a connection */
        driver = get_driver_instance();
        con = driver->connect(endereco, user, pass);

        /* Connect to the MySQL database */
        con->setSchema(schema);
        return con;
}
