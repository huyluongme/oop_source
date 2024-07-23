#include <iostream>

using namespace std;

#include "dog.h"
#include "fish.h"

int main()
{
    // Dog
    Dog* pD = new Dog("Dog", "Billy", "Land", Gender::Male, 1, "toy");
    cout << pD->getInfor() << "\n\n";

    cout << "Dog's behavier:\n";
    cout << pD->move() << '\n';
    cout << pD->feed() << '\n';
    cout << pD->makeSound() << "\n\n";
    
    pD->setFavoriteToy("shoes");
    cout << "Information of dog after changed favorite toy\n";
    cout << pD->getInfor() << "\n\n";
    delete pD;

    //Fish
    Fish* pF = new Fish("Fish", "Nemo", "Aquatic", Gender::Female, "Salt water");
    cout << pF->getInfor() << "\n\n";
    cout << "Fish's behavier:\n";
    cout << pF->move() << '\n';
    cout << pF->feed() << '\n';
    cout << pF->makeSound() << "\n\n";

    pF->setWaterType("Fresh water");
    cout << "Information of fish after changed water type\n";
    cout << pF->getInfor() << '\n';
    delete pF;
    return 0;
}