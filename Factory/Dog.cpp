#include "Dog.h"

IMPORT(Dog);

Dog::Dog() : Animal() {}
string Dog::value() const { return "Dog"; }
int Dog::GetNumOfLegs() const { return 4; }
void Dog::Speak() { cout << "Wooo" << endl; }
Dog* Dog::clone() const { return new Dog(*this); }
void Dog::Free() { delete this; }
void Dog::setCnt(int val) { testCnt = val; }
void Dog::showCnt() { cout << "Dog show Cnt : " << testCnt << endl; }
