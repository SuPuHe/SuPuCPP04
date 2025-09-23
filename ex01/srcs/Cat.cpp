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
	std::cout << GREEN << "Cat constructor called" << RESET << std::endl;
}

Cat::Cat(Cat const &copy): Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &copy)
{
	std::cout << "Cat copy assigment operator called" << std::endl;
	_type = copy._type;
	return *this;
}

Cat::~Cat()
{
	std::cout << RED << "Cat destructor called" << RESET << std::endl;
}

void	Cat::makeSound()const
{
	std::cout << MAGENTA << "Meow meow meow" << RESET << std::endl;
}
