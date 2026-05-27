#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    std::cout << "\nTEST 1: Concrete classes work" << std::endl;
    Dog dog;
    Cat cat;
    dog.makeSound();
    cat.makeSound();

    std::cout << "\nTEST 2: Polymorphism with Animal* pointers" << std::endl;
    const Animal* animals[4];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();
    animals[3] = new Cat();
    
    for (int i = 0; i < 4; i++) {
        animals[i]->makeSound();
    }
    
    for (int i = 0; i < 4; i++) {
        delete animals[i];
    }

    std::cout << "\nTEST 3: Deep Copy with Brain" << std::endl;
    Dog d1;
    d1.setIdea(0, "fetch");
    Dog d2 = d1;
    d1.setIdea(0, "no fetch");
    std::cout << "d1[0]: " << d1.getIdea(0) << std::endl;
    std::cout << "d2[0]: " << d2.getIdea(0) << " (independent!)" << std::endl;

    return 0;
}