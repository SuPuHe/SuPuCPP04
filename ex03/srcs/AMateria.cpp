/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 17:06:29 by omizin            #+#    #+#             */
/*   Updated: 2025/09/30 12:17:08 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "Amateria constructow with type: " << _type << std::endl;
}

AMateria::AMateria(const AMateria &copy) : _type(copy._type)
{
	std::cout << "Amateria copy constructor with type: " << _type << std::endl;
}

AMateria &AMateria::operator=(const AMateria &copy)
{
	if (this != &copy)
		_type = copy._type;
	std::cout << "Amateria copy assigment operator with type: " << _type << std::endl;
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "Amateria desructor with type: " << _type << std::endl;
}

std::string const & AMateria::getType() const { return _type; }

void AMateria::use(ICharacter& target)
{
	std::cout << "Use some kind of undefined materia on " << target.getName() << std::endl;
}
