/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:57:05 by omizin            #+#    #+#             */
/*   Updated: 2025/09/23 16:02:40 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "main.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(Dog const &copy);
		Dog &operator=(Dog const &copy);
		~Dog();

		void	makeSound()const;
};
