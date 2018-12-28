cmake_minimum_required(VERSION 3.12)
project(template_rmcgcontainer)

set(CMAKE_CXX_STANDARD 14)

add_executable(template_rmcgcontainer main.cpp CGContainerBase.cpp CGContainerBase.hpp CGContainer.cpp CGContainer.hpp A.cpp A.hpp B.cpp B.hpp C.cpp C.hpp G.cpp G.hpp)