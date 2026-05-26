#pragma once
#include "Animal.hpp"

class Cat : virtual public Animal {
    public:
        Cat();
        Cat(const Cat& other) = default;
        Cat& operator=(const Cat& other) = default;
        ~Cat();
        std::string getType();
        void makeSound() const;
};