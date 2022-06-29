#include <gtkmm.h>
#include <gtkmm-3.0/gtkmm/application.h>
#include <gtkmm-3.0/gtkmm/builder.h>
#include <gtkmm-3.0/gtkmm/button.h>
#include <gtkmm-3.0/gtkmm/entry.h>
#include <gtkmm-3.0/gtkmm/stock.h>
#include <gtkmm-3.0/gtkmm/window.h>
#include <iostream>

Gtk::Window * pWindow;
Gtk::Entry * num_1, * num_2, * result;
Gtk::Button * btn_soma;

void btn_soma_clicked(){
    std::string a = num_1->get_text();
    std::string b = num_2->get_text();

    int x = std::stoi(a);
    int y = std::stoi(b);

    result->set_text( std::to_string(x + y) );
}


int main (int argc, char *argv[])
{

    auto app = Gtk::Application::create(argc, argv, "org.gtkmm.example");
    auto refBuilder = Gtk::Builder::create();

    refBuilder->add_from_file("soma.glade");
    refBuilder->get_widget( "window", pWindow );

    if (pWindow){
        refBuilder->get_widget( "num_1", num_1 );
        refBuilder->get_widget( "num_2", num_2 );
        refBuilder->get_widget( "btn_soma", btn_soma );
        refBuilder->get_widget( "result", result );
    }

    if( btn_soma ){
        btn_soma->signal_clicked().connect(sigc::ptr_fun(btn_soma_clicked));
    }

    app->run(* pWindow);
    return 0;
}
