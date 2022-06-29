//#include <gtkmm-3.0/gtkmm.h>
#include <gtkmm-3.0/gtkmm/button.h>
#include <gtkmm-3.0/gtkmm/label.h>
#include <gtkmm-3.0/gtkmm/main.h>
#include <gtkmm-3.0/gtkmm/window.h>

int main (int argc, char *argv[])
{
    Gtk::Main kit(argc, argv);
    Gtk::Window window;
    window.set_default_size(600, 400);
    window.set_title("Primeiro Exemplo de GTK+ com gtkmm para C++!");

    Gtk::Label label;
    label.set_text("Este é um label");

    //window.add(label);


    Gtk::Button botao;
    botao.set_label("Este é um botão");
    window.add(botao);

    window.show_all();

    Gtk::Main::run(window);
    return 0;
}
