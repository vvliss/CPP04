#pragma once
#include <string>
#include <iostream>

class WrongAnimal {
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const std::string& type);
        WrongAnimal(const WrongAnimal& other) = default;
        WrongAnimal& operator=(const WrongAnimal& other) = default;
        virtual ~WrongAnimal();
        virtual std::string getType() const;
        virtual void makeSound() const;
};