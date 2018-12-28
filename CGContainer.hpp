//
// Created by Muhammed Ahad on 2018-12-28.
//

#ifndef TEMPLATE_RMCGCONTAINER_CGCONTAINER_HPP
#define TEMPLATE_RMCGCONTAINER_CGCONTAINER_HPP

#include <iostream>
#include <memory>
#include "CGContainerBase.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

template <typename T, typename U>  class CGContainer;

template <typename T, typename U> std::ostream &operator<<(std::ostream &os, const CGContainer<T,U> &cg) {
    return os << " Derived: "<< cg.type;
}

template <typename T, typename U> class CGContainer : public CGContainerBase{
    friend std::ostream &operator<<<T,U>(std::ostream &os, const CGContainer<T,U> &cg);
public:
    CGContainer(T t, U u, CG_TYPE type) : CGContainerBase(type), data(std::make_shared<std::pair<T,U>>(std::make_pair(t,u))){

    }

    virtual void evaluate() override {
        std::cout << "CGContainer: " << data->first << std::endl;
    }

    std::shared_ptr<std::pair<T,U>> data;
};


#endif //TEMPLATE_RMCGCONTAINER_CGCONTAINER_HPP
