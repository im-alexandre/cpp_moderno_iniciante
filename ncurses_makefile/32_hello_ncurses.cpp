#include <iostream>
#include <string>
#include <ncurses.h>
#include <unistd.h>

int main (int argc, char *argv[])
{
    // Ncurses aceita apenas strings 
    // Precisamos converter a string para um array de char
    std::string ola = "Olá, ncurses!";
    char * hello = &ola[0];
    const int delay = 30000;
    int y, x;
    x = y = 0;

    if (argc > 1)
    {
        hello = argv[1];
    }

    // Inicia a janela
    initscr();

    noecho();
    curs_set(false);

    while (1)
    {
        clear();
        mvprintw(y, x, "X");
        getch();
        refresh();
        usleep(delay);
        ++x;
    }

    move(10, 20);

    // "printa" na tela
    printw(hello);

    // Atualiza a janela
    refresh();

    // pega a entrada do teclado
    getch();

    endwin();
    return 0;
}
