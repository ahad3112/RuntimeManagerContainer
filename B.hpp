//
// Created by Muhammed Ahad on 2018-12-28.
//

#ifndef TEMPLATE_RMCGCONTAINER_B_HPP
#define TEMPLATE_RMCGCONTAINER_B_HPP


#include <ostream>
#include "A.hpp"

class B : public A{

    friend std::ostream &operator<<(std::ostream &os, const B &b);
};


#endif //TEMPLATE_RMCGCONTAINER_B_HPP
