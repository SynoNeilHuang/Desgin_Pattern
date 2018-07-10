#ifndef __CAT_H__
#define __CAT_H__
#include "Factory.h"


class Cat : public Animal {
    public :
	Cat() { cout << "Cat Constructor" << endl; }
	string value() const { return "Cat"; };
	int GetNumOfLegs() const { return 4; }
	void Speak() { cout << "Meow" << endl; }
	void Free() { delete this; };
};

IMPORT(Cat);
#endif
