#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        WrongCat(const WrongCat& other) = default;
        WrongCat& operator=(const WrongCat& other) = default;
        ~WrongCat();
        void makeSound() const;
};