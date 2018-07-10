#ifndef __DOG_H__
#define __DOG_H__
#include "Factory.h"

class Dog : public Animal {
    public :
	Dog();
	string value() const;
	int GetNumOfLegs() const;
	void Speak();
	void Free();
	Dog* clone() const;
	void setCnt(int val);
	void showCnt();
};

#endif
