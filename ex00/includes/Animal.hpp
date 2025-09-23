/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:57:00 by omizin            #+#    #+#             */
/*   Updated: 2025/09/23 15:18:17 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "main.hpp"

class Animal
{
	private:
		std::string	_type;
	public:
		Animal();
		Animal(std::string type);
		Animal(Animal const &copy);
		Animal &operator=(Animal const &copy);
		virtual ~Animal();

		void	makeSound();
};
