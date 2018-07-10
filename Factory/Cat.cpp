#include "Cat.h"

IMPORT(Cat);

Cat::Cat() : Animal() {}
string Cat::value() const { return "Cat"; }
int Cat::GetNumOfLegs() const { return 4; }
void Cat::Speak() { cout << "Meow" << endl; }
Cat* Cat::clone() const { return new Cat(*this); }
void Cat::Free() { delete this; }
void Cat::setCnt(int val) { testCnt = val; }
void Cat::showCnt() { cout << "Cat show Cnt : " << testCnt << endl; }
