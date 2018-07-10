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

	static Factory *Self() {
	    if (instance == nullptr) {
		instance = new Factory();
	    }
	    return instance;
	}

	bool Register(Animal* animal) {
	    m_FactoryMap.emplace(animal->value(), animal);
	    return true;
	}

	Animal* Get(const string& animalType) {
	    return m_FactoryMap[animalType];
	}

    private:
	Factory() {};
	Factory(const Factory&) {}
	Factory& operator=(const Factory&) { return *this; }
	static Factory* instance;
	unordered_map<string, Animal*> m_FactoryMap;
};

Factory* Factory::instance = nullptr;

#endif
