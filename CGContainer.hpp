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

template <typename T, typename U, typename V>  class CGContainer;

template <typename T, typename U, typename V> std::ostream &operator<<(std::ostream &os, const CGContainer<T,U,V> &cg) {
    return os << " Derived: "<< cg.type;
}

template <typename T, typename U, typename V = std::string> class CGContainer : public CGContainerBase<V>{
    friend std::ostream &operator<<<T,U,V>(std::ostream &os, const CGContainer<T,U,V> &cg);
public:
    CGContainer(T t, U u, V type) : CGContainerBase<V>(type), data(std::make_shared<std::pair<T,U>>(std::make_pair(t,u))){

    }

    virtual void evaluate() override {
        std::cout << "CGContainer: " << data->first << std::endl;
    }

    std::shared_ptr<std::pair<T,U>> data;
};


#endif //TEMPLATE_RMCGCONTAINER_CGCONTAINER_HPP
