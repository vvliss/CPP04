#include "Cat.hpp"

Cat::Cat() : Animal("Cat") { 
    std::cout << "Constructed: it's a cat!" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructed" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}

std::string Cat::getType() const {
    return type;
}