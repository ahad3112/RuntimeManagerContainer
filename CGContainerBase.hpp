//
// Created by Muhammed Ahad on 2018-12-28.
//

#ifndef TEMPLATE_RMCGCONTAINER_CGCONTAINERBASE_HPP
#define TEMPLATE_RMCGCONTAINER_CGCONTAINERBASE_HPP

#include <iostream>
#include "A.hpp"

template <typename T> class CGContainerBase;
template<typename T = std::string> std::ostream &operator<<(std::ostream &os, const CGContainerBase<T> &cg) {
    return os << " Base: " << cg.type;
}

template <typename T = std::string> class CGContainerBase {
    friend std::ostream &operator<<<T>(std::ostream &os, const CGContainerBase<T> &cg);
public:
    CGContainerBase (T type) : type(type){

    }

    virtual void evaluate() {
        std::cout << "CGContainerBase: " << type << std::endl;
    }

protected:
    T type;
};


#endif //TEMPLATE_RMCGCONTAINER_CGCONTAINERBASE_HPP
