/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 17:06:31 by omizin            #+#    #+#             */
/*   Updated: 2025/09/30 14:01:46 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "main.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure(const Cure &copy);
		Cure &operator=(const Cure &copy);
		~Cure();

		AMateria* clone() const;
		void use(ICharacter& target);
};
