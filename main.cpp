#include <iostream>
#include <vector>
#include "CGContainer.hpp"
#include "B.hpp"
#include "G.hpp"
#include "C.hpp"

int main() {
    CGContainerBase *cg1 = new CGContainer<B, G>(B(), G(), CG_TYPE::WIFI);
    CGContainerBase *cg2 = new CGContainer<B, G>(B(), G(), CG_TYPE::WIFI);
    CGContainerBase *cg3 = new CGContainer<C, G>(C(), G(), CG_TYPE::INTERNAL_ERROR);
    CGContainerBase *cg4 = new CGContainerBase(CG_TYPE::OTHER);

    std::vector<CGContainerBase *> list = {cg1, cg2, cg3, cg4};


    for (auto it = list.cbegin(); it != list.cend(); it++){
        //auto cg = static_cast<const CGContainer<B,G,std::string> *>(*it);
        //std::cout << "CGContainer : " << *cg << std::endl;
        //std::cout << (*(*it)) << std::endl;
        (*it)->evaluate();

    }

    return 0;
}