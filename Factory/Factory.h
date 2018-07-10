#ifndef __FACTORY_H__
#define __FACTORY_H__

#include <unordered_map>
#include "Animal.h"

using std::unordered_map;
using std::string;

#define IMPORT(ANIMAL) namespace {\
    const bool registered##ANIMAL = Factory::Self()->Register(new ANIMAL()); \
}

class Factory {
    public:
	~Factory() { m_FactoryMap.clear(); }
	static Factory *Self();
	bool Register(Animal* animal);
	Animal* Get(const string& animalType);
	void Debug();
    private:
	Factory() {};
	Factory(const Factory&) {}
	Factory& operator=(const Factory&) { return *this; }
	static Factory* instance;
	unordered_map<string, Animal*> m_FactoryMap;
};

#endif
