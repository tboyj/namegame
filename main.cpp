#include <iostream>

#include "person.h"


int main() {

    std::cout << "### The Name Game ###\n\n";
    person p("Jackson", false);
    std::cout << "NAME: "<<p.get_name()<<std::endl;

    std::string a = {};
    int iter = 0;

    while (a != "QUIT") {
        std::cout << "CHANGE MY NAME! (type 'QUIT' to exit): -> ";
        std::cin >> a;
        if (a != "QUIT") {
            p.set_name(a);
            iter++;

            std::cout << "NAME (ALTERATION "<< iter << "): "<<p.get_name()<<std::endl;
        } else {
            std::cout << "### The Name Game ###" << std::endl;
        }
    }

    return 0;
}