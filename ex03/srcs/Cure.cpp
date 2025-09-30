/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 17:06:28 by omizin            #+#    #+#             */
/*   Updated: 2025/09/30 14:11:10 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &copy): AMateria(copy)
{
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &copy)
{
	if (this != &copy)
		AMateria::operator=(copy);
	std::cout << "Cure copy assigment operator called" << std::endl;
	return *this;
}

Cure::~Cure()
{
	std::cout << "Cat destructor called" << std::endl;
}

AMateria* Cure::clone() const { return new Cure(*this); }

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
