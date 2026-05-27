#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    std::cout << "====== EXERCISE 02: Abstract Class ======" << std::endl;

    std::cout << "\n[IMPORTANT] Cannot instantiate abstract Animal!" << std::endl;
    // Animal a;  // COMPILE ERROR! Animal is abstract
    // Animal* ptr = new Animal();  // COMPILE ERROR! Animal is abstract
    std::cout << "Attempting: Animal a; would cause COMPILATION ERROR" << std::endl;
    std::cout << "Reason: Animal::makeSound() is pure virtual (= 0)" << std::endl;

    std::cout << "\n[TEST 1] Direct instantiation of concrete classes works" << std::endl;
    std::cout << "Creating Dog and Cat directly..." << std::endl;
    Dog myDog;
    Cat myCat;
    
    std::cout << "\nCalling makeSound() on concrete objects:" << std::endl;
    myDog.makeSound();
    myCat.makeSound();

    std::cout << "\n[TEST 2] Polymorphism with abstract Animal pointer" << std::endl;
    std::cout << "Even though Animal is abstract, we can use Animal* pointers!" << std::endl;
    std::cout << "Creating Dog and Cat through Animal* pointers..." << std::endl;
    
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    
    std::cout << "\nPolymorphic calls (correct behavior despite abstract base):" << std::endl;
    dog->makeSound();  // Calls Dog::makeSound()
    cat->makeSound();  // Calls Cat::makeSound()
    
    delete dog;
    delete cat;

    std::cout << "\n[TEST 3] Mixed array of animals (abstract base, concrete objects)" << std::endl;
    std::cout << "Creating array of 6 animals (3 dogs + 3 cats)" << std::endl;
    
    const int arraySize = 6;
    Animal* animals[arraySize];
    
    for (int i = 0; i < arraySize / 2; i++) {
        animals[i] = new Dog();
    }
    for (int i = arraySize / 2; i < arraySize; i++) {
        animals[i] = new Cat();
    }
    
    std::cout << "\nPolymorphic loop (each calls its own makeSound()):" << std::endl;
    for (int i = 0; i < arraySize; i++) {
        std::cout << "[" << i << "] ";
        animals[i]->makeSound();
    }
    
    std::cout << "\nCleaning up array:" << std::endl;
    for (int i = 0; i < arraySize; i++) {
        delete animals[i];
    }

    std::cout << "\n[TEST 4] Deep Copy - Copy Constructor" << std::endl;
    std::cout << "Original Dog and Cat, copying them..." << std::endl;
    Dog originalDog;
    Dog copiedDog = originalDog;
    std::cout << "copiedDog has its OWN Brain" << std::endl;
    
    Cat originalCat;
    Cat copiedCat = originalCat;
    std::cout << "copiedCat has its OWN Brain" << std::endl;

    std::cout << "\n[TEST 5] Deep Copy - Assignment Operator" << std::endl;
    std::cout << "Creating dog1 and dog2..." << std::endl;
    Dog dog1;
    Dog dog2;
    dog2 = dog1;
    std::cout << "dog2 = dog1; (deep copy, own Brain)" << std::endl;
    
    std::cout << "Creating cat1 and cat2..." << std::endl;
    Cat cat1;
    Cat cat2;
    cat2 = cat1;
    std::cout << "cat2 = cat1; (deep copy, own Brain)" << std::endl;

    std::cout << "\n====== SUMMARY ======" << std::endl;
    std::cout << "Animal is abstract: cannot instantiate directly" << std::endl;
    std::cout << "But polymorphism through Animal* pointers still works!" << std::endl;
    std::cout << "This prevents accidental direct Animal creation" << std::endl;

    return 0;
}