#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Animal {
    public:
	Animal() : testCnt(0) {};
	virtual string value() const = 0;
	virtual int GetNumOfLegs() const = 0;
	virtual void Speak() = 0;
	virtual void Free() = 0;
	virtual Animal* clone() const = 0;
	virtual void setCnt(int val) = 0;
	virtual void showCnt() = 0;
	int testCnt;
};

#endif
