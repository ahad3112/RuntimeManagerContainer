//
// Created by Muhammed Ahad on 2018-12-28.
//

#include "CGContainerBase.hpp"


std::ostream &operator<<(std::ostream &os, const CGContainerBase &cg) {
    return os << " Base: " << cg.type;
}