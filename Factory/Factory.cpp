#include "Factory.h"

Factory* Factory::instance = nullptr;

Factory * Factory::Self() {
    if (instance == nullptr) {
	instance = new Factory();
    }
    return instance;
}

bool Factory::Register(Animal* animal) {
    m_FactoryMap.emplace(animal->value(), animal);
    return true;
}

Animal* Factory::Get(const string& animalType) {
    return m_FactoryMap[animalType]->clone();
}

void Factory::Debug() {
    int cnt(10);
    for (const auto& idx : m_FactoryMap) {
	cout << idx.first << " : " << idx.second << endl;
	idx.second->setCnt(cnt++);
	idx.second->showCnt();
    }
}
