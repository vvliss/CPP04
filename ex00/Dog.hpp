#pragma once
#include "Animal.hpp"

class Dog : virtual public Animal {
    public:
        Dog();
        Dog(const Dog& other) = default;
        Dog& operator=(const Dog& other) = default;
        ~Dog();
        std::string getType() const;
        void makeSound() const;
};