/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 17:06:32 by omizin            #+#    #+#             */
/*   Updated: 2025/09/30 14:02:14 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Ice: public AMateria
{
	public:
		Ice();
		Ice(const Ice &copy);
		Ice &operator=(const Ice &copy);
		~Ice();

		AMateria* clone() const;
		void use(ICharacter& target);
};
