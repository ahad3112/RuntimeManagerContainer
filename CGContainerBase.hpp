//
// Created by Muhammed Ahad on 2018-12-28.
//

#ifndef TEMPLATE_RMCGCONTAINER_CGCONTAINERBASE_HPP
#define TEMPLATE_RMCGCONTAINER_CGCONTAINERBASE_HPP

#include <iostream>
#include "A.hpp"

class CGContainerBase {
    friend std::ostream &operator<<(std::ostream &os, const CGContainerBase &cg);
public:
    CGContainerBase (CG_TYPE type) : type(type){

    }

    virtual void evaluate() {
        std::cout << "CGContainerBase: " << type << std::endl;
    }

protected:
    CG_TYPE type;
};


#endif //TEMPLATE_RMCGCONTAINER_CGCONTAINERBASE_HPP
