#include <iostream>
#include "Factory.h"
#include "Cat.h"

int main() {

    Animal* AniPtr = Factory::Self()->Get("Cat");
    AniPtr->Speak();
    return 0;
}

