#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    std::cout << " TEST 1: Basic Polymorphism" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    delete j;
    delete i;
    
    std::cout << "\n TEST 2: Array of Animals " << std::endl;
    const int arraySize = 4;
    Animal* animals[arraySize];
    
    for (int x = 0; x < arraySize / 2; x++) {
        animals[x] = new Dog();
    }
    for (int x = arraySize / 2; x < arraySize; x++) {
        animals[x] = new Cat();
    }
    
    std::cout << "\n deleting array... " << std::endl;
    for (int x = 0; x < arraySize; x++) {
        delete animals[x];
    }
    
    std::cout << "\n TEST 3: Deep Copy - Copy Constructor " << std::endl;
    Dog originalDog;
    Dog copiedDog = originalDog;
    
    Cat originalCat;
    Cat copiedCat = originalCat;
    
    std::cout << "\n TEST 4: Deep Copy - Assignment Operator " << std::endl;
    Dog dog1;
    Dog dog2;
    dog2 = dog1;
    
    Cat cat1;
    Cat cat2;
    cat2 = cat1;
    
    std::cout << "\n END OF PROGRAM " << std::endl;
    return 0;
}