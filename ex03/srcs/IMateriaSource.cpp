/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 17:06:24 by omizin            #+#    #+#             */
/*   Updated: 2025/09/30 15:35:23 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < SIZE; i++)
		_templates[i] = nullptr;
	std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	for (int i = 0; i < SIZE; i++)
		_templates[i] = copy._templates[i] ? copy._templates[i]->clone() : nullptr;
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < SIZE; i++)
		{
			delete _templates[i];
			_templates[i] = copy._templates[i] ? copy._templates[i]->clone() : nullptr;
		}
	}
	std::cout << "MateriaSource copy assigment operator called" << std::endl;
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < SIZE; i++)
		delete _templates[i];
	std::cout << "MateriaSource destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (!_templates[i])
		{
			_templates[i] = m;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (_templates[i] &&_templates[i]->getType() == type)
			return _templates[i]->clone();
	}
	return nullptr;
}
