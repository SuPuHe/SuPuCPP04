/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:56:56 by omizin            #+#    #+#             */
/*   Updated: 2025/09/23 16:00:24 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Animal::Animal(): _type("Default")
{
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(std::string type): _type(type)
{
	std::cout << "Animal constructor with type" << _type << " called" << std::endl;
}

Animal::Animal(Animal const &copy): _type(copy._type)
{
	std::cout << "Animal copy constructor with type" << _type << " called" << std::endl;
}

Animal &Animal::operator=(Animal const &copy)
{
	std::cout << "Animal copy assigment operator with type" << _type << " called" << std::endl;
	_type = copy._type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor with type " << _type << " called" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "Animal with type " << _type << " makes an animal sound" << std::endl;
}

std::string	Animal::getType() const { return _type; }
