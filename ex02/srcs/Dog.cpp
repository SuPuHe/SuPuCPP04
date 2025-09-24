/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:57:04 by omizin            #+#    #+#             */
/*   Updated: 2025/09/23 16:30:11 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Dog::Dog(): Animal()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << GREEN << "Dog constructor called" << RESET << std::endl;
}

Dog::Dog(Dog const &copy): Animal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	_brain = new Brain(*copy._brain);
}

Dog &Dog::operator=(Dog const &copy)
{
	std::cout << "Dog copy assigment operator called" << std::endl;
	if (this != &copy)
	{
		Animal::operator=(copy);
		delete _brain;
		_brain = new Brain(*copy._brain);
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << RED << "Dog destructor called" << RESET << std::endl;
	delete _brain;
}

void	Dog::makeSound()const
{
	std::cout << MAGENTA << "Bark bark bark" << RESET << std::endl;
}

Brain* Dog::getBrain() const { return _brain; }
