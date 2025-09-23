/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 16:41:44 by omizin            #+#    #+#             */
/*   Updated: 2025/09/23 16:46:06 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "main.hpp"

class Brain
{
	private:
		std::string	_ideas[100];
	public:
		Brain();
		Brain(Brain const &copy);
		Brain &operator=(Brain const &copy);
		~Brain();
};
