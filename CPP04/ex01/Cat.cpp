#include "Cat.hpp"

Cat::Cat(): Animal() {
	std::cout << "Cat default constructor called\n";
	this->_type = "cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &copy): Animal() {
	std::cout << "Cat copy constructor called\n";
	*this = copy;
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "Cat assignment operator called\n";
	if (this != &other) {
		this->_type = other._type;
		this->_brain = new Brain();
		*this->_brain = *other._brain;
	}
	return *this;
}

Cat::~Cat() {
	delete this->_brain;
	std::cout << "Cat destructor called\n";
}

void Cat::makeSound() {
	std::cout << "Meow\n";
}

void Cat::setIdea(int i, std::string idea) {
	this->_brain->setIdea(i, idea);
}

void Cat::getIdeas() {
	for (int i = 0; i < 100; i++)
		if (!this->_brain->getIdea(i).empty())
			std::cout << "Idea[" << i << "] is: " << this->_brain->getIdea(i) << std::endl;
}