#include <iostream>
#include "Factory.h"

int main() {
    Animal* CatPtr = Factory::Self()->Get("Cat");
    CatPtr->Speak();
    Animal* DogPtr = Factory::Self()->Get("Dog");
    DogPtr->Speak();
    Factory::Self()->Debug();
    CatPtr->setCnt(3456);
    DogPtr->setCnt(7890);
    CatPtr->showCnt();
    DogPtr->showCnt();
    Factory::Self()->Debug();
    return 0;
}

