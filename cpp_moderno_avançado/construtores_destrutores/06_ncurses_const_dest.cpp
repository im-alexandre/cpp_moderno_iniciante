#include <iostream>
#include <ncurses.h>
#include <unistd.h>

class Qualquer {
    public:
        Qualquer(){
            initscr();
        }

        void primeira_func(){
            printw("Primeira função!!!");
            refresh();
            getch();
        }

        void segunda_func(){
            move(3,20);
            printw("Segunda função!");
            getch();
        }

        ~Qualquer(){
            endwin();
        }
};

int main (int argc, char *argv[])
{
    Qualquer q = Qualquer();
    q.primeira_func();
    /* Limpando a referência: */
    // delete &q;
    usleep(30000);
    q.segunda_func();
    usleep(30000);
    return 0;
}
