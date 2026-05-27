#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    std::cout << "TEST 1: Polymorphism with Brain" << std::endl;
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    dog->makeSound();
    cat->makeSound();
    delete dog;
    delete cat;

    std::cout << "\nTEST 2: Copy Constructor - Deep Copy" << std::endl;
    Dog originalDog;
    originalDog.setIdea(0, "fetch");
    Dog copiedDog = originalDog;
    std::cout << "After copy:" << std::endl;
    std::cout << "  originalDog[0]: " << originalDog.getIdea(0) << std::endl;
    std::cout << "  copiedDog[0]: " << copiedDog.getIdea(0) << std::endl;
    
    originalDog.setIdea(0, "no fetch");
    std::cout << "After modifying originalDog:" << std::endl;
    std::cout << "  originalDog[0]: " << originalDog.getIdea(0) << std::endl;
    std::cout << "  copiedDog[0]: " << copiedDog.getIdea(0) << " (UNCHANGED - DEEP COPY!)" << std::endl;

    std::cout << "\nTEST 3: Assignment Operator - Deep Copy" << std::endl;
    Dog dog1;
    dog1.setIdea(5, "park");
    Dog dog2;
    dog2.setIdea(5, "sleep");
    std::cout << "Before assignment:" << std::endl;
    std::cout << "  dog1[5]: " << dog1.getIdea(5) << std::endl;
    std::cout << "  dog2[5]: " << dog2.getIdea(5) << std::endl;
    
    dog2 = dog1;
    std::cout << "After dog2 = dog1:" << std::endl;
    std::cout << "  dog1[5]: " << dog1.getIdea(5) << std::endl;
    std::cout << "  dog2[5]: " << dog2.getIdea(5) << std::endl;
    
    dog1.setIdea(5, "squirrels");
    std::cout << "After modifying dog1:" << std::endl;
    std::cout << "  dog1[5]: " << dog1.getIdea(5) << std::endl;
    std::cout << "  dog2[5]: " << dog2.getIdea(5) << " (UNCHANGED - DEEP COPY!)" << std::endl;

    return 0;
}