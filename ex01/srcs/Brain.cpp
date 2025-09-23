/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 16:41:47 by omizin            #+#    #+#             */
/*   Updated: 2025/09/23 16:55:41 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Brain::Brain()
{
	std::cout << GREEN << "Default Brain constructor called" << RESET << std::endl;
}

Brain::Brain(Brain const &copy)
{
	std::cout << GREEN << "Brain copy constructor called" << RESET << std::endl;
	*this = copy;
}

Brain &Brain::operator=(Brain const &copy)
{
	std::cout << GREEN << "Brain copy assigment operator called" << RESET << std::endl;
	if (this == &copy)
		return *this;
	for (int i = 0; i < 100; i++)
		_ideas[i] = copy._ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << RED << "Brain deconstructor called" << RESET << std::endl;
}
