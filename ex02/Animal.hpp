#pragma once
#include <string>
#include <iostream>

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        Animal(const std::string& type);
        Animal(const Animal& other) = default;
        Animal& operator=(const Animal& other) = default;
        virtual ~Animal();
        virtual std::string getType() const;
        virtual void makeSound() const;
};