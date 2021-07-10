#include "../Builder/BuilderChina.hpp"
#include "../Builder/BuilderEnglish.hpp"
#include "../Director/Director.hpp"
#include "../Product/Suite.hpp"

void ClientCode(Director& director){
    BuilderChina* china = new BuilderChina();
    director.set_builder(china);
    director.set_chair();
    Suite* suit = china->get_result();
    suit->List_element();


    BuilderEnglish* english = new BuilderEnglish();
    director.set_builder(english);
    director.set_all();
    Suite* suit1 = english->get_result();
    suit1->List_element();
}