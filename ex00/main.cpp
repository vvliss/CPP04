#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << " TEST 1: Basic Polymorphism " << std::endl;
    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "Types: ";
    std::cout << animal->getType() << " | ";
    std::cout << dog->getType() << " | ";
    std::cout << cat->getType() << std::endl;

    std::cout << "Sounds:" << std::endl;
    animal->makeSound();
    dog->makeSound();
    cat->makeSound();

    delete animal;
    delete dog;
    delete cat;

    std::cout << "\n TEST 2: Array Polymorphism " << std::endl;
    const int size = 4;
    Animal* animals[size];
    
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();
    animals[3] = new Cat();

    std::cout << "Array of Animals - making sounds:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << "[" << i << "] ";
        animals[i]->makeSound();
    }

    for (int i = 0; i < size; i++) {
        delete animals[i];
    }

    std::cout << "\n TEST 3: Wrong Animal " << std::endl;
    const WrongAnimal* wrongAnimal = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "Sounds (PROBLEM!):" << std::endl;
    std::cout << "WrongAnimal: ";
    wrongAnimal->makeSound();
    std::cout << "WrongCat: ";
    wrongCat->makeSound();

    delete wrongAnimal;
    delete wrongCat;

    return 0;
}