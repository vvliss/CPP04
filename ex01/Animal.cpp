#include "Animal.hpp"

Animal::Animal() : type("") {
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const std::string& type) : type(type) {
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const {
    return type;
}

void Animal::makeSound() const {
    std::cout << "Some generic animal sound" << std::endl;
}