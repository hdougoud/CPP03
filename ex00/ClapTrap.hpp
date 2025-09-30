/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 13:24:31 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/30 13:45:18 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(const ClapTrap &src);
		ClapTrap operator=(const ClapTrap &src);
		~ClapTrap();
		void attack(const std::string& target);
		void beRepaired(unsigned int amount);
		void takeDamage(unsigned int amount);
	private:
		int	_hitPoint;
		int	_energyPoint;
		int	_attackDamage;
};

#endif
