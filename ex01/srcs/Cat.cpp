/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:57:01 by omizin            #+#    #+#             */
/*   Updated: 2025/09/23 16:29:42 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Cat::Cat(): Animal()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << GREEN << "Cat constructor called" << RESET << std::endl;
}

Cat::Cat(Cat const &copy): Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	_brain = new Brain(*copy._brain);
}

Cat &Cat::operator=(Cat const &copy)
{
	std::cout << "Cat copy assigment operator called" << std::endl;
	if (this != &copy)
	{
		Animal::operator=(copy);
		delete _brain;
		_brain = new Brain(*copy._brain);
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << RED << "Cat destructor called" << RESET << std::endl;
	delete _brain;
}

void	Cat::makeSound()const
{
	std::cout << MAGENTA << "Meow meow meow" << RESET << std::endl;
}

Brain* Cat::getBrain() const { return _brain; }
