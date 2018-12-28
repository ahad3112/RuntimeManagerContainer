#include <iostream>
#include <vector>
#include "CGContainer.hpp"
#include "B.hpp"
#include "G.hpp"
#include "C.hpp"

int main() {
    CGContainerBase<std::string> *cg1 = new CGContainer<B, G, std::string>(B(), G(), "wifi");
    CGContainerBase<std::string> *cg2 = new CGContainer<B, G, std::string>(B(), G(), "internalError");
    CGContainerBase<std::string> *cg3 = new CGContainer<C, G, std::string>(C(), G(), "censorError");
    CGContainerBase<std::string> *cg4 = new CGContainerBase<std::string>("anotherError");


    std::vector<CGContainerBase<std::string> *> list = {cg1, cg2, cg3, cg4};

    for (auto it = list.cbegin(); it != list.cend(); it++){
        //auto cg = static_cast<const CGContainer<B,G,std::string> *>(*it);
        //std::cout << "CGContainer : " << *cg << std::endl;
        //std::cout << (*(*it)) << std::endl;
        (*it)->evaluate();

    }

    return 0;
}