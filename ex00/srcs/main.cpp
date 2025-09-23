/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:57:06 by omizin            #+#    #+#             */
/*   Updated: 2025/09/23 15:59:53 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
	const Animal* meta = new Animal();
	//const Animal* j = new Dog();
	const Animal* i = new Cat();
	//std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	//j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	return 0;
}
