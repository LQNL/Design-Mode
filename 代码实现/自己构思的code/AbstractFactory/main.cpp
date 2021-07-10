#include <iostream>
#include "./客户端/client.hpp"
#include "./Factory/具体加工厂/FactoryTwo.hpp"
#include "./Factory/具体加工厂/FactoryOne.hpp"
#include "./Factory/具体加工厂/FactoryThree.hpp"

int main(){
    FactoryOne one;
    client(one);

    std::cout << "-----------------\n";
    FactoryTwo two;
    client(two);
    std::cout << "-----------------\n";
    FactoryThree three;
    client(three);
    return 0;
}