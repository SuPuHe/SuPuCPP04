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
	std::cout << "Default Test" << std::endl << std::endl;
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;
		delete i;
	}
	std::cout << "My Test" << std::endl << std::endl;
	{
		const int size = 4;
		std::cout << "CONTRUCTORS" << std::endl;
		Animal* animals[size];

		for (int i = 0; i < size / 2; i++)
			animals[i] = new Dog();

		for (int i = size / 2; i < size; i++)
			animals[i] = new Cat();
		std::cout << "SOUNDS:" << std::endl;
		for (int i = 0; i < size; i++)
			animals[i]->makeSound();
		std::cout << "COPY:" << std::endl;
		Dog basicDog;
		{
			Dog tmpDog = basicDog;
		}
		std::cout << "DELETE:" << std::endl;
		for (int i = 0; i < size; i++)
			delete animals[i];
	}
	std::cout << "DEEP COPY TEST" << std::endl << std::endl;
	{

		Dog originalDog;
		originalDog.getBrain()->setIdea(0, "I want food!");

		Dog copiedDog = originalDog;

		std::cout << "\nOriginal Dog idea[0]: "
				<< originalDog.getBrain()->getIdea(0) << std::endl;
		std::cout << "Copied Dog idea[0]: "
			<< copiedDog.getBrain()->getIdea(0) << std::endl;

		std::cout << "Changing copiedDog idea[0]" << std::endl;
		copiedDog.getBrain()->setIdea(0, "I am sleepy");

		std::cout << "Original Dog idea[0]: "
				<< originalDog.getBrain()->getIdea(0) << std::endl;
		std::cout << "Copied Dog idea[0]: "
				<< copiedDog.getBrain()->getIdea(0) << std::endl;
	}
	return 0;
}
