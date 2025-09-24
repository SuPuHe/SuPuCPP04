/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:57:06 by omizin            #+#    #+#             */
/*   Updated: 2025/09/23 16:41:18 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
	std::cout << "Default class test" << std::endl << std::endl;;
	{
		//const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();

		delete i;
		delete j;

	}
	std::cout << std::endl << "My class test" << std::endl << std::endl;
	{
		const Animal* cat = new Cat();
		const Animal* dog = new Dog();
		std::cout << "Cat type is: " << cat->getType() << " " << std::endl;
		std::cout << "Dog type is: " << cat->getType() << " " << std::endl;
		std::cout << "This cat make this sound: ";
		cat->makeSound();
		std::cout << "This dog make this sound: ";
		dog->makeSound();

		delete cat;
		delete dog;
	}
	return (0);
}
