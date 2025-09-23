/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:57:08 by omizin            #+#    #+#             */
/*   Updated: 2025/09/23 16:31:40 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

WrongAnimal::WrongAnimal(): _type("Default")
{
	std::cout << GREEN << "Default WrongAnimal constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): _type(type)
{
	std::cout << GREEN << "WrongAnimal constructor with type" << _type << " called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy): _type(copy._type)
{
	std::cout << "Animal copy constructor with type" << _type << " called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &copy)
{
	std::cout << "WrongAnimal copy assigment operator with type" << _type << " called" << std::endl;
	_type = copy._type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED << "WrongAnimal destructor with type " << _type << " called" << RESET << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << MAGENTA << "WrongAnimal with type " << _type << " makes an wrong sound" << RESET << std::endl;
}

std::string	WrongAnimal::getType() const { return _type; }
