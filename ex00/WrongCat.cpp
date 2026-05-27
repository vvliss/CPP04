#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") { 
    std::cout << "Constructed: it's NOT a cat!" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "NOT-a-Cat destructed" << std::endl;
}
