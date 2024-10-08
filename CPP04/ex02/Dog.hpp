#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {
private:
	Brain* _brain;
public:
	Dog();
	Dog(const Dog& copy);
	Dog operator=(const Dog& other);
	virtual ~Dog();
	void makeSound();
	void setIdea(int i, std::string idea);
	void getIdeas();
};