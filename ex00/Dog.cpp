#include "Dog.hpp"

Dog::Dog() : Animal("Dog") { 
    std::cout << "Constructed: it's a dog!" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructed" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Bark!" << std::endl;
}

std::string Dog::getType() const {
    return type;
}