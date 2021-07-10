#include <iostream>

#include "./Director/Director.hpp"
#include "./client/client.hpp"

int main(){
    Director* director= new Director();
    ClientCode(*director);
    delete director;
    return 0;
}