//
// Created by Muhammed Ahad on 2018-12-28.
//

#ifndef TEMPLATE_RMCGCONTAINER_C_HPP
#define TEMPLATE_RMCGCONTAINER_C_HPP

#include <ostream>
#include "A.hpp"

class C : public A{
public:
    friend std::ostream &operator<<(std::ostream &os, const C &c);
};


#endif //TEMPLATE_RMCGCONTAINER_C_HPP
