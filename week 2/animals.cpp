#include <iostream>

class Animal{
    public:
        virtual void makeSound(){
            std::cout << "Generic animal sound" << std::endl;
        }
};

class Dog: public Animal{
    public:
        void makeSound() override{
            std::cout << "Woof woof" << std::endl;
        }
};

class Cat: public Animal{
    public:
        void makeSound() override{
            std::cout << "Meow Meow" << std::endl;
        }
};


int main(){
    Animal* animal1 = new Dog();

    Animal* animal2 = new Cat();

    animal1 -> makeSound();

    animal2 -> makeSound();

    delete animal1;

    delete animal2;

    return 0;
}