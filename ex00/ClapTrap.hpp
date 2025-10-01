/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 13:24:31 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/01 17:05:29 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

#define RED				"\033[1;31m"
#define GREEN			"\033[1;32m"
#define YELLOW			"\033[1;33m"
#define BLUE			"\033[1;34m"
#define PURPLE			"\033[1;35m"
#define RESET			"\033[0m"
#define MAX_HIT_POINT	20
class ClapTrap
{
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &src);
		ClapTrap operator=(const ClapTrap &src);
		~ClapTrap();
		void 			attack(const std::string &target);
		void 			beRepaired(unsigned int amount);
		void 			takeDamage(unsigned int amount);
	private:
		std::string		_name;
		unsigned int	_hitPoint;
		unsigned int	_energyPoint;
		unsigned int	_attackDamage;
		bool			CheckEnergyAndHit(void);
};

#endif
