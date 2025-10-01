/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 17:06:26 by omizin            #+#    #+#             */
/*   Updated: 2025/10/01 12:46:53 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Character::Character(): _name("Default"), _trash(nullptr)
{
	for (int i = 0; i < SIZE; i++)
		_inventory[i] = nullptr;
	std::cout << "Character constructor with name: " << _name << std::endl;
}

Character::Character(std::string name): _name(name), _trash(nullptr)
{
	for (int i = 0; i < SIZE; i++)
		_inventory[i] = nullptr;
	std::cout << "Character constructor with name: " << _name << std::endl;
}

Character::Character(const Character &copy): _name(copy._name), _trash(nullptr)
{
	for (int i = 0; i < SIZE; i++)
		_inventory[i] = copy._inventory[i] ? copy._inventory[i]->clone() : nullptr;
	std::cout << "Character copy constructor with name: " << _name << std::endl;
}

Character &Character::operator=(const Character &copy)
{
	if (this != &copy)
	{
		_name = copy._name;
		for (int i = 0; i < SIZE; i++)
		{
			delete _inventory[i];
			_inventory[i] = copy._inventory[i] ? copy._inventory[i]->clone() : nullptr;
		}
		while (_trash)
		{
			trash *tmp = _trash;
			_trash = _trash->next;
			delete tmp->materia;
			delete tmp;
		}
		_trash = nullptr;
	}
		std::cout << "Character copy assigment operator with name: " << _name << std::endl;
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < SIZE; i++)
		delete _inventory[i];
	while (_trash)
	{
		trash *tmp = _trash;
		_trash = _trash->next;
		delete tmp->materia;
		delete tmp;
	}
}

std::string const & Character::getName() const { return _name; }

void Character::equip(AMateria* m)
{
	if (!m)
	{
		std::cout << "There is nothing to put in inventory" << std::endl;
		return;
	}
	for (int i = 0; i < SIZE; i++)
	{
		if (_inventory[i] == m)
		{
			std::cout << "This materia is already equipped" << std::endl;
			return;
		}
	}
	for (int i = 0; i < SIZE; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			return;
		}
	}
	delete m;
	std::cout << "No more space in the inventory" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= SIZE)
	{
		std::cout << "This inventory slot doesn't exist" << std::endl;
		return;
	}
	if (!_inventory[idx])
	{
		std::cout << "This slot is empty" << std::endl;
	}

	trash *node = new trash(_inventory[idx]);
	node->next = _trash;
	_trash = node;

	_inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= SIZE)
	{
		std::cout << "This inventory slot doesn't exist" << std::endl;
		return;
	}
	if (!_inventory[idx])
	{
		std::cout << "This slot is empty" << std::endl;
		return;
	}
	_inventory[idx]->use(target);
}
