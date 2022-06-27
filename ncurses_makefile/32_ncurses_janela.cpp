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

    int altura, largura, inicio_x, inicio_y;
    altura = inicio_x = inicio_y = 10;
    largura = 40;

    initscr();

    WINDOW * window = newwin(altura, largura, inicio_x, inicio_y);
    refresh();

    box(window, 0, 0);
    wprintw( window, "Formulario" );
    wrefresh( window );

    noecho();
    curs_set(false);

    // Atualiza a janela
    refresh();

    // pega a entrada do teclado
    getch();

    endwin();
    return 0;
}
